#include "main.h"
#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure with name age and owner details of a dog
 * @name: string of dog's name
 * @age: age of dog
 * @owner: owner
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;


#endif
