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
printf("size of a char: %zu\n", sizeof(charType));
printf("size of an int: %zu\n", sizeof(intType));
printf("size of a long int: %zu\n", sizeof(lType));
printf("size of a long long int: %zu\n", sizeof(llType));
printf("size of a float: %zu\n", sizeof(floatType));
return (0);
}
