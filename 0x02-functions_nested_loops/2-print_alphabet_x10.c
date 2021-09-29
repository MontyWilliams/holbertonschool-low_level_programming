#include "main.h"
/**
 * print_alphabet - header function that prints alphabet
 *
 * Description: using a homemade putchar from main.h
 * Return: returns the alphabet in lower case
  */
void print_alphabet_x10(void)
{
int count;
char i;
for (count =1; count <= 10; count++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar (i);

}
_putchar ('\n');
}
}
