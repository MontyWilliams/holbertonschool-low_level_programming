#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @c: var
 * Description: print the last digit of a number
 * Return: the last digit of a number
 */
void jack_bauer(void)
{
int h, m, s;
for (h = 0; h <= 24; h++)
{
for (m = 0; m <= 60; m++)
{
for (s =0; s <= 60; s++)
{
_putchar ('0' + s);
}
_putchar ('0' + m);
}
_putchar ('0' + h);
}
return ;
}
