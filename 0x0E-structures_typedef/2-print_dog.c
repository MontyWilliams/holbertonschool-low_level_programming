#include <stdio.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - woof woof
 * @d: dog
 * Description: Bow Wow
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %2.f\n", d->age);
	printf("Owner: %s\n", d->owner);

}
