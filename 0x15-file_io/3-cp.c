#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * code1fail - Print error message if can't read file
 * @file: Name of the file that can't be read
 */
void code1fail(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * code2fail - Print error message if can't write to file
 * @file: Name of the file that can't be write to
 */
void code2fail(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

/**
 * closefail - Print error message if file can't close
 * @fd: File descriptor of the file
 */
void closefail(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
  * main - copy the content of one file to another
  * @argc: Number of arguments received
  * @argv: Array of arguments received
  *
  * Return: 0 on success
  */
int main(int argc, char *argv[])
{
	int code1, code2, file1rd, file2wr, closed;
	char buffer[BUFFER_SIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
		code1fail(argv[1]);
	if (argv[2] == NULL)
		code2fail(argv[2]);
	code1 = open(argv[1], O_RDONLY);
	if (code1 == -1)
		code1fail(argv[1]);
	code2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (code2 == -1)
		code2fail(argv[2]);
	file1rd = read(code1, buffer, BUFFER_SIZE);
	if (file1rd == -1)
		code1fail(argv[1]);
	while (file1rd > 0)
	{
		file2wr = write(code2, buffer, file1rd);
		if (file2wr != file1rd)
			code2fail(argv[2]);
		file1rd = read(code1, buffer, BUFFER_SIZE);
		if (file1rd == -1)
			code1fail(argv[1]);
	}
	closed = close(code1);
	if (closed == -1)
		closefail(code1);
	closed = close(code2);
	if (closed == -1)
		closefail(code2);
	return (0);
}
