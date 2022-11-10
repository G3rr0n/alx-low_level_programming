#include "main.h"
#include <stdlib.h>

/**
 * free_grid - func that frees mem for 2 dim array
 * @grid: array to be freed
 * @height: param two (height of grid)
 *
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
