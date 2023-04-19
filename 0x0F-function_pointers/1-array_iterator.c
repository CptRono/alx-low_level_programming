#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each
 * element of an array.
 * @array: the array
 * @size: size of the array
 * @action: the function to be executed on each member of the array
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size != 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}