#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: counts # of arguments
 * @argv: arguments
 * Description:  multiplies 2 ints
 * Return: 0
 */


int main(int argc, char  *argv[])
{
	int i;
	int prod = 1;
	int x;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
	x = strtol(argv[i], NULL, 10);
		prod = x * prod;
	}
		printf("%d\n", prod);
	return (0);
}
