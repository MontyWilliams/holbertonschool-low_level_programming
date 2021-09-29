#include "main.h"
/**
 * _islower - checks if a value is lower
 *
 * Description: bootleg functions that checks if avalue is lower than int c
 * Return: 1 if higher 2 if lower
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
