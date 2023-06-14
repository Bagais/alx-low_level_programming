#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees up 2D grid allocated
 * @grid: pointer to grid pointer
 * @height: height of grid
 *
 * Rerturn: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
