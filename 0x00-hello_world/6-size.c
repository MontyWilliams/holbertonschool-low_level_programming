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
printf("Size of a char: %zu byte(s)\n",  sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(lType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(llType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
