#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2D array created previously by alloc_grid
 * @grid: aloc grid
 * @height: heigth
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
