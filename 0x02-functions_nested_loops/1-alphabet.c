#include "main.h"
/**
 * main - Initiates  function
 *
 * Description: using a homemade putchar from main.h
 * Return: returns the alphabet in lower case
 */
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
_putchar (i);
}
_putchar ('\n');
return ;
}
