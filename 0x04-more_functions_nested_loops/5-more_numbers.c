#include "main.h"
/**
 * print_most_numbers - prints #s
 * Description: function that prints #s
 * Return:numbers
 */
void print_most_numbers(void)
{
char c;
char i;
for (i = 0; i < 10; i++)
{

for (c = 0; c <=  14; c++)
{
if (c / 10 > 0)
{
_putchar((c / 10) + '0');
}
_putchar((c % 10) + '0');
}
_putchar('\n');
}
}

