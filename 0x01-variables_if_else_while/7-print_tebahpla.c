#include <stdlib.h>
#include <stdio.h>
/**
 * main - Initiates  function
 *
 * Description: prints alphabet backwards
 * Return: single char int
 */
int main(void)
{
int ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar (ch);
}
putchar ('\n');
return (0);
}
