#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create a square of 2d array of integers
 * @width: width of the square
 * @height: height of the square
 *
 * Return: a pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **square, i, j;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	square = malloc(sizeof(int *) * height);
	if (square == NULL)
	{
		free(square);
		return (NULL);
	}

	i = 0;
	while (i < height)
	{
		square[i] = malloc(sizeof(int) * width);
		if (square[i] == NULL)
		{
			for (i = 0; i < width; i++)
				free(square[i]);
			free(square);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			square[i][j] = 0;
			j++;
		}
		i++;
	}

	return (square);
}
