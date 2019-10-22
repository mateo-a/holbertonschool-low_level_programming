#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = name;
	if (new_dog->name == 0)
	{
		free(new_dog);
		return (0);
	}
	new_dog->owner = owner;
	if (new_dog == 0)
	{
		free(new_dog);
		return (0);
	}
	new_dog->age = age;
	return (new_dog);
}
