#include "main.h"
/**
 * _isalpha - checks if a value is lower
 * @c: parmeter for function
 * Description: bootleg functions that checks if avalue is lower than int c
 * Return: 1 if higher 2 if lower
 *
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else

return (0);
}

