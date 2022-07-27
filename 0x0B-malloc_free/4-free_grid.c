#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a grid of squares of 2d int array
 * @grid: the square
 * @height: height of the square
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);
		}
		free(grid);
	}
}
