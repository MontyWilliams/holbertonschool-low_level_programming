#include<stdio.h>
/**
 * main - Initiates  function
 *
 * Description: The function checks the size of 5 diff file types.
 * Return: returns 5 values, char, int long int, long long int, and a float
 */
int main(void)
{
char charType;
int intType;
long int lType;
long long int llType;
float floatType;
printf("size of a char: %zu", sizeof(charType)\n);
printf("size of an int: %zu", sizeof(intType)\n);
printf("size of a long int: %zu", sizeof(lType)\n);
printf("size of a long long int: %zu", sizeof(llType)\n);
printf("size of a float: %zu", sizeof(floatType)\n);
return (0);
}
