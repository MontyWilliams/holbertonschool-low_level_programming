#include "main.h"
/**
 * main - main function
 * @ac: argument count
 * @av: arg
 * Return: nada
 */
int main(__attribute__((unused))int ac, char **av)
{

	int to, from, copy;
	char buffer[1024];

	/*open*/
	from = open(av[1], O_RDONLY);
	if (from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	/*read file*/
	to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
		if (to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		while ((copy = read(from, buffer, 1024)) != 0)
		{
			if (copy == -1)
				dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]),
				exit(98);
			if (write(to, buffer, copy) != copy)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]),
				exit(99);
		}
	close(to);
	close(from);
	return (0);
}
