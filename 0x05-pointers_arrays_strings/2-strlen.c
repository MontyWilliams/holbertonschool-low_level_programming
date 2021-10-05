#include "main.h"
/**
 * _strlen - check the code
 * Descripton; returns length
 * @s: int pointer
 * Return: Always 0.
 */

int _strlen(char *s)
{
int i = 0;
while (*s != '\0')
{
i++;
s++;
}
return (i);
}
