#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * _strdup - function that returns a pointer to
 *           a newly allocated space in memory,
 *           which contains a copy of the string
 *           given as a parameter.
 *
 * @str: char
 * Return: NULL if str is NULL or if insufficient memory was available.
 *         On success returns a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *str_2;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	str_2 = malloc(i + 1 * sizeof(char));
	if (str_2 == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		str_2[j] = str[j];
	return (str_2);
}

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = _strdup(name);
	if (new_dog->name == 0)
	{
		free(new_dog);
		return (0);
	}
	new_dog->owner = _strdup(owner);
	if (new_dog == 0)
	{
		free(new_dog->name);
		free(new_dog);
		return (0);
	}
	new_dog->age = age;
	return (new_dog);
}
