#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - function that creates an array of integers.
 * @min: smallest number in the array
 * @max: largest number in the array
 * Return: pointer to the newly created array ordered from min to max
*/
int *array_range(int min, int max)
{
	int len, i, j;
	int *p;

	if (min > max)
		return (NULL);
	len = max - min;
	p = malloc(len * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0, j = min - 1; i < len; i++, j++)
		p[i] = j + 1;
	return (p);
}
