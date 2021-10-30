#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_all - prints all
 * @format: format
 * Description: blah
 * Return: 0
 */
void print_all(const char * const format, ...)
{
int i = 0;
va_list ap;
char *string;
int flag;

va_start(ap, format);
while (format && format[i])
{
flag = 0;
switch (format[i])
{
case 'c':
printf("%c", va_arg(ap, int));
flag = 1;
break;
case 'i':
printf("%d", va_arg(ap, int));
flag = 1;
break;
case 'f':
printf("%f", va_arg(ap, double));
flag = 1;
break;
case 's':
string = va_arg(ap, char *);
if (string == NULL)
string = "(nil)";
printf("%s", string);
flag = 1;
break;
}
if (flag == 1 && format[i + 1])
printf(", ");
i++;
va_end(ap);
}
printf("\n");
}
