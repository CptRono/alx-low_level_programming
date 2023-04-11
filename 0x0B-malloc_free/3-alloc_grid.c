#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional
 * array of integers.
 * @width: number of columns in array
 * @height: number of rows in array
 * Return: null if width or height is 0 or function fails
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i;
	int j;

	if (width == 0 || height == 0)
		return (NULL);
	p = malloc(height * sizeof(int *));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
		p[i] = malloc(width * sizeof(int));
	/*initialize each element of array to 0*/
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
