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
	int (*ans)(int, int);
	char *valid = "+-*/%";

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (!strstr(valid, argv[2]))
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	ans = get_op_func(argv[2]);
	printf("%d\n", ans(a, b));
	return (0);
}
