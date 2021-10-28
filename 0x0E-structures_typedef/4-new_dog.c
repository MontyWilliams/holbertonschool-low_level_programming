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

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);

	newdog->name = strdup(name);
	newdog->age = age;
	newdog->owner = strdup(owner);
return (newdog);
}
