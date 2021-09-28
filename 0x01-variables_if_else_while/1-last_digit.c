#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Initiates  function
 *
 * Description: prints random # and finds last digit
 * Return: returns random # and last digit 
 */
int main(void)
{
int n;
srand(time(0));
int i;
n = rand() - RAND_MAX / 2;
i = n % 10;
if (i > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, i);
}
else if(i == 0)
{
printf("Last digit of %d is %d and is 0\n", n, i);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, i);
}
return (0);
}
