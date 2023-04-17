#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - creates a new dog using struct dog_t
 * @name: 1st element of struct
 * @age: 2nd
 * @owner: 3rd
 * Return: pointer to the new record i.e dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	/*create pointer to the new dog to be returned & allocate mem for it*/
	dog_t *new;

	new = malloc(sizeof(new));
	/*allocate memory for each member of new*/
	new->name = malloc(strlen(name) + 1);
	if (name == NULL)
	{
		free(name);
		return (NULL);
	}
	new->owner = malloc(sizeof(strlen(owner) + 1));
	if (name == NULL)
	{
		free(name);
		return (NULL);
	}
	/* copy each string to each of new's member */
	strcpy(new->name, name);
	strcpy(new->owner, owner);
	new->age = age;
	return (new);
}

