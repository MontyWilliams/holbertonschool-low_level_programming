#include "main.h"
/**
 * print_diagonal - entry point
 * Description: Prints a daigonal line based on variable n
 * @n:variable
 * Return: void
 */
void print_diagonal(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
