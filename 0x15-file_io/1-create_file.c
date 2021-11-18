#include "main.h"

/**
 * create_file - creates a file and writes to it or modifies existing file
 * @filename: name of file
 * @text_content: content to write
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, writ, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	writ = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (writ == -1)
		return (-1);

	for (len = 0; (text_content[len]); len++)
		;

	fd = write(writ, text_content, len);

	if (writ == -1 || fd == -1)
		return (-1);

	close(writ);
	return (1);
}
