#include "main.h"
/**
 * puts_half - function should print the 2nd half of a string
 * @str: char string
 * Description: write a function that prints half a string
 * if number is odd then print lenght_of_the_stringi \2
 * Return: 0.
 */
void puts_half(char *str)
{
	int i = 0, j = 0;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i + 1) / 2;
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
