#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: counts # of arguments
 * @argv: array of arguements
 * Descriptipn:  prints first element in the array which is the name
 * Return: 0
 */


int main(int argc, char  *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
