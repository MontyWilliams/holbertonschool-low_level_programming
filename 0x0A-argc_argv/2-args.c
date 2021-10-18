#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: counts # of arguments
 * @argv: arguments
 * Description:  prints all arguments on a new line
 * Return: 0
 */


int main(int argc, char  *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
