#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: void pointer to new mem block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *a;
	unsigned int i;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	/*allocate new mem block*/
	a = malloc(new_size);
	if (a == NULL)
		return (NULL);
	/*copy data from old mem block to new*/
	for (i = 0; i < new_size && i < old_size; i++)
		*((char *)a + i) = *((char *)ptr + i);
	/*free ptr*/
	free(ptr);
	return (a);
}
