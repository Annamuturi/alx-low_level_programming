#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: A pointer to the name of the file to create
 * @text_content: A pointer to a string to write to the file
 *
 * Return: if the function fails - -1 else -1
 */

int create_file(const char *filename, char *text_content)
{
	int len = 0;
	int fd, n;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = strlen(text_content);
		n = write(fd, text_content, len);

		if (n != len)
		{
			close(fd);
			unlink(filename);
				return (-1);
		}
	}
	close(fd);
	return (1);
}
