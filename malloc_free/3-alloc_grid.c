#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers
 * @width : width of the 2 dimensional array
 * @height : height of the 2 dimensional array
 *
 * Return: NULL if width or height = 0, or we have a failure,
 * the matrix otherwise
 */

int **alloc_grid(int width, int height)
{
	int x, y;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(height * sizeof(int *));

	if (array == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		array[x] = malloc(width * sizeof(int));

		if (array[x] == NULL)
		{
			for (y = x - 1; y >= 0; y--)
				free(array[y]);

			free(array);

			return (NULL);
		}
	}

	for (x = 0; x < width; x++)
	{
		for (y = 0; y < width; y++)
		{
			array[x][y] = 0;
		}
	}
	return (array);
}
