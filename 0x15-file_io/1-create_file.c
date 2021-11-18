#include "main.h"

/**
 * create_file - creates a file and writes to it or modifies existing file
 * @filename: name of file
 * @text_content: content to write
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_APPEND | O_CREAT | O_WRONLY, 0600);

	if (fd == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
		write(fd, text_content, i);

		close(fd);
	return (1);
}
