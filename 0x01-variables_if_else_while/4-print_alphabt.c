#include <stdlib.h>
#include <stdio.h>
/**
 * main - Initiates  function
 *
 * Description: prints random # and finds last digit
 * Return: returns random # and last digit
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
putchar (ch);
}
putchar ('\n');
return (0);
}
