#include "main.h"
/**
 * puts2 - prints a string
 * Description:print char string and skip every other element in array
 * @str: charaacter string
 * Return: Always 0.
 */
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
if (str[i] == '\0')
{
break;
}
i++;
}
_putchar('\n');
}
