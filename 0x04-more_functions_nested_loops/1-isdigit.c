#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: parmeter for function
 * Description: bootleg functions that checks if a value is a digit
 * Return: 1 if digit, 0 if not
 *
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
