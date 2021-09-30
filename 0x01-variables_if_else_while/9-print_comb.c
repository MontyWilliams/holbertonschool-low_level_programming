#include <stdlib.h>
#include <stdio.h>
/**
 * main - initiates function
 * Description: print 0-9 
 * Return: ints
 */
int main(void)
{
int i;

for (i = 0 ; i < 10 ; i++)
{
putchar (i + '0');
if (i != 9)
{
putchar (',');
putchar (' ');
}
}
putchar ('\n');
return (0);
}
