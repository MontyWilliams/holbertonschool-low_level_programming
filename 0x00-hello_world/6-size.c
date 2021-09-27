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
printf("size of a char: %zu\n",  std::size_t(charType));
printf("size of an int: %zu\n", sizeof(T)(intType));
printf("size of a long int: %zu\n", sizeof(T)(lType));
printf("size of a long long int: %zu\n", sizeof(T)(llType));
printf("size of a float: %zu\n", sizeof(T)(floatType));
return (0);
}
