#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Initiates  function
 *
 * Description: The function checks the size of 5 diff file types.
 * Return: returns 5 values, char, int long int, long long int, and a float
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if
(n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
