#include <stdio.h>
#include "function_pointers.h"

 /**
 * print_name - prints a char name
 * @name: char name
 * @f: function pointer
 * Description: pointer to a function
 * Return: void, but points to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
