#include "main.h"
/**
 * _puts_recursion -print string
 * Description: print a string followed by new line
 * @s: string
 * Return: s
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar (*s);
	_puts_recursion(++s);
}
