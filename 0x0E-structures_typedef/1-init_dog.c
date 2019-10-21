#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - create a dog structure
 * @d: struct
 * @name: name
 * @age: age
 * @owner: ownder
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
