#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees a 2d grid previously created
* @grid: 2d grid
* @height: height of the grid
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
