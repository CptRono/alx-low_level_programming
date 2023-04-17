#ifndef MAIN_H
#define MAIN_H
#include "dog.h"

/*forward declarations to avoid circular dependencies*/
/*circular dependencies are caused by header files including each other*/
struct dog;
typedef struct dog dog_t;

/*normal fucntion declarations*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
