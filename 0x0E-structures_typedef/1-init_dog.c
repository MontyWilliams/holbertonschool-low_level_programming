#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - woof woof
 * @d: dog
 * @name: name
 * @age: age
 * @owner: owner
 * Description: Bow Wow
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
