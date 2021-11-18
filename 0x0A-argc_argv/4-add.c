#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: counts # of arguments
 * @argv: arguments
 * Description:  adds 2 ints
 * Return: 0
 */
int main(int argc, char  *argv[])
{
	int i;
	int sum;
	int x;

	if (argc < '0' && argc > '9')
	{
	printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
	for (x = 0; argv[i][x]; x++)
	{
	if (argv[i][x] < '0' && argv[i][x] > '9')
	{
		printf("Error\n");
		return (1);
	}
	else
		sum = sum + *argv[i];
	}
}
		printf("%d\n", sum);
	return (0);
}
