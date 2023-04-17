#include <stdio.h>
#include "main.h"
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: pointer to the struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %f\n", (d->age != 0.0f) ? d->age : 0.0f);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
