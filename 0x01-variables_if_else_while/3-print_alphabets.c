#include <stdlib.h>
#include <stdio.h>
/**
 * main - Initiates  function
 *
 * Description: prints alphabet twice
 * Return: alphabet in lower case followed by upercase and new line
 */
int main(void)
{
char ch;
char cg;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar (ch);
}
for (cg = 'A'; cg <= 'Z'; cg++)
{
putchar (cg);
}
putchar ('\n');
return (0);
}
