#include "main.h"
#include <stdio.h>
/**
 * print_array - prints an array
 * @a: pointer int
 * @n: int
 * Description: print an array
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
if (i != n - 1)
printf("%d, ", a[i]);
else
printf("%d", a[i]);
i++;
}
putchar('\n');
}
