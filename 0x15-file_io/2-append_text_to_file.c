#include "main.h"

/**
 * append_text_to_file - append text to the end of a file
 * @filename: name of file
 * @text_content: content to write
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (filename == NULL)
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
