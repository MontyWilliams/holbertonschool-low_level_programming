#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index- returns index
 * @array: array pointer
 * @size: size of the array
 * @cmp: function pointer
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{

int i;

if (size <= 0)
return (-1);

if (array == NULL || (!size))
return (-1);

for (i = 0; i < size; i++)
while (cmp(array[i]) != 0)
{
return (i);
}
return (0);
}
