#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @c: var 
 * Description: print the last digit of a number
 * Return: the last digit of a number
*/
int print_last_digit(int c)
{
c = (1 % 10);
if(c < 0)
{
c = (c * c);
_putchar (c);
}
else
{
_putchar (c);
}
return (0);
}
