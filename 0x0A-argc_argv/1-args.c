#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: counts # of arguments
 * @argv: unused
 * Description:  prints # of arguments
 * Return: 0
 */


int main(int argc, __attribute__((unused)) char  *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
