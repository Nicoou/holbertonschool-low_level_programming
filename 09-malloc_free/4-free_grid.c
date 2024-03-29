#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid previously created by
 * my alloc_grid function
 * @grid : the address of the two dimensional grid
 * @height : height of the grid
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);

	free(grid);
}
