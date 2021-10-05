#include "main.h"
/**
 * _strlen - check the code
 * Descripton; returns length
 * @s: int pointer
 * Return: Always 0.
 */

int _strlen(char *s)
{
int i;
while (*s != '\0')
{
i++;
s++;
}
return (i);
}
