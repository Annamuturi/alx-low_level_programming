#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 * Return: the number of letters the function should read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, byte_read, bytes_written;
	char *buffer;

	if (filename == NULL)
	return (0); /*Error file nameis Null*/
	fd = open(filename, O_RDONLY);
	if (fd  == -1)
	return (0); /*Error opening a file*/
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0); /*Error allocating memory*/
	}
	while (letters > 0 && (byte_read = read(fd, buffer, letters)) > 0)
	if (byte_read == -1)
	return (0);
	bytes_written = write(STDOUT_FILENO, buffer, byte_read);
	if (bytes_written != byte_read)
		return (0); /*Error failed to write to stdout*/
	free(buffer);
	close(fd);

	if (byte_read == -1)
		return (0);
	return (byte_read);
}
