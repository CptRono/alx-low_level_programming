#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created by
 * alloc_grid function.
 * @grid: grid to be freed
 * @height: number of rows in the grid
 */
void free_grid(int **grid, int height)
{
	int i;
	/*free mem allocated for each row*/
	for (i = 0; i < height; i++)
		free(grid[i]);
	/*free pointer to rows*/
	free(grid);
}
