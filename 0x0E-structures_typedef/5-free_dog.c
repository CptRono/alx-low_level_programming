#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - func that frees dog
 * @d: pointer to dog to be freed
*/
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
