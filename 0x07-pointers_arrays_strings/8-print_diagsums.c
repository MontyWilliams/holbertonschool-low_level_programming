#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print diagnals in a 2d array
 * @a: pointer to array
 * @size: number of bites
 * Description: prints daignals but is a trick questin u got a 2d array
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int l;
	int y = 0;
	int sumlr = 0;
	int sumrl = 0;

	for (l = 0; l < size; l++)
	{
		sumlr += a[y];
		y++;
		a = a + size;
	}
	a = a - (size * l);
	printf("%d, ", sumlr);
	y = size - 1;
	for (l = 0; l < size; l++)
	{
		sumrl += a[y];
		y--;
		a = a + size;
	}
	printf("%d\n", sumrl);
return;
}
