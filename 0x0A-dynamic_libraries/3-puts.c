#include "main.h"

/**
 * _puts - prints astring
 * Description:print char string using bootleg _putchar
 * @str: charaacter string
 * Return: Always 0.
 */
void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
