#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * main- uses arguments passed to do math
 * @argc: number of arguments passed
 * @argv: array pointer
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int (*funcptr)(ils
	ls
	nt, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (strlen(argv[2]) != 1 && *argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*'
		&& *argv[2] != '/' && *argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}


	a = atoi(argv[1]);
	b = atoi(argv[3]);
	funcptr = get_op_func(argv[2]);
	printf("%d\n", funcptr(a, b));
	return (0);
}
