#include "main.h"
/**
 * read_textfile - prints a script and returns leter count
 * @filename: file
 * @letters: number of letters
 * Return: letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, size;
	char *buf;

	if (!filename)
		return (0);
	buf = malloc(letters * sizeof(char));
	if (!buf)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	size = write(STDOUT_FILENO, buf, read(fd, buf, letters));
	if (size == -1)
		return (0);
	close(fd);
	free(buf);
	return (size);
}
