#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - woof woof
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Description: create new dog
 * Return: newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	struct dog *cp;

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		free(newdog);
		return (NULL);

	cp = malloc(sizeof(dog_t));

	if (cp == NULL)
		return (NULL);

	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	cp->name = newdog->name;
	cp->owner = newdog->owner;

	return (newdog);
}
