#include "main.h"

/**
 * print_rev - prints astring
 * Description:print char string using bootleg _putchar
 * @s: charaacter string
 * Return: Always 0.
 */
void print_rev(char *s)
{
while (*s != '\0')
{
s++;
}
s--;
while (*s != '\0')
{
_putchar(*s);
s--;
}
_putchar('\n');
}

