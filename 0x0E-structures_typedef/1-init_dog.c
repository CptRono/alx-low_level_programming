#include <stdio.h>
#include "dog.h"
#include "main.h"
#include <stdlib.h>
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
#include <stdio.h>
#include "dog.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
