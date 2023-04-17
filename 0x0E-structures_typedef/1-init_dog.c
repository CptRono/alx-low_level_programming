#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include "main.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the struct to be init'd
 * @name: name to be copied
 * @age: age to be copied
 * @owner: owner to be copied
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL && name != NULL && owner != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
