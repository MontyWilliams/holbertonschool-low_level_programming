#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - woof
 * @d: pointer
 * Description: frees do ar
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
