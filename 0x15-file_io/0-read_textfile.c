#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 *
 * Return: the number of letters the function should read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, lprint, lread, closed;
	char *buffer;

	file = lprint = lread = 0;
	buffer = malloc(letters * sizeof(char));
	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	lread = read(file, buffer, letters);
	if (lread == -1)
		return (0);
	lprint = write(STDOUT_FILENO, buffer, lread);
	if (lprint == -1)
		return (0);
	closed = close(file);
	if (closed == -1)
		return (0);
	free(buffer);
	return (lread);
}
