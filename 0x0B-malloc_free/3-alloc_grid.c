#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - 2D array pointer
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to an int 2D array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if ( width < 0 || height < 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			if (grid[i][j] == NULL)
			    return (NULL);
			grid = malloc(sizeof(int) * 2);
			grid[i][j] = grid[height][width];
		}
	}
	return (grid[i][j]);
}
