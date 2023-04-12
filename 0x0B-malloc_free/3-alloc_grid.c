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
	p = (int **)malloc(height * sizeof(int *));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}
		/*initialize each element of array to 0*/
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
