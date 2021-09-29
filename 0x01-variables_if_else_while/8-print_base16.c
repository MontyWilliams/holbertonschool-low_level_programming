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
int l;
int n;
for (l = 0; l < 10; l++)
{
putchar ((l % 10) + '0');
}
for (n = 'a'; n < 'g';  n++)
{
putchar (n);
}
putchar ('\n');
return (0);
}
