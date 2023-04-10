#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - Append text at the end of the line
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of file.
 *
 * Return: -1 if the function fails and -1 if it doesnt exits else 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, len = 0;
if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
{
return (-1);
}
if (text_content !=  NULL)
{
len = strlen(text_content);
}
len = write(fd, text_content, len);
if (len == -1)
{
close(fd);
return (-1);
}
close(fd);
return (1);
}
