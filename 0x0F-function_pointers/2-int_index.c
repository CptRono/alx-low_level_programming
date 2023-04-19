#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index -  function that searches for an integer.
 * @array: array the search is to be performed on
 * @size: size of array to be checked
 * @cmp: pointer to the function to be used to compare values
 * Return: returns the index of the first element for which the cmp
 * function does not return 0. -1 if no element matches or size<=0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
