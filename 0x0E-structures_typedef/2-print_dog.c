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

	if (d->name == NULL)
		d->name = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nil)";
	if (!d)
		return;

	(d) != NULL ? printf("Name: %s\n", d->name) : printf("Name: (nil)");
	(d) != NULL ? printf("Age: %f\n", d->age) : printf("Age: (nil)");
	(d) != NULL ? printf("Owner: %s\n", d->owner) : printf("Owner: (nil)");

}
