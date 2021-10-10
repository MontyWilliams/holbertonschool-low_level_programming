#include "holberton.h"
/**
 * reverse_array - reverses an array
 * @a: an array of integers
 * @n: the number of elements to swap
 * Description: rverses an array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *begin = a;
	int *end = a + n - 1;
	int holder;
		for (holder = 0 ; begin < end; begin++, end--)
		{
		holder = *begin;
		*begin = *end;
		*end = holder;
		}
}
