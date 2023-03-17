#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Create an array of integers of min to max.
 *
 * @min: First min range.
 * @max: Second max range.
 * Return: pointer pointen to the specific memory.
 **/

int *array_range(int min, int max)
{
	int *array, x;

	if (min >= max)
		return (NULL);

	array = (int *)malloc(sizeof(int) * (max - (min - 1)));
	if (array == NULL)
		return (NULL);

	for (x = 0; min <= max; x++, min++)
	{
		array[x] = min;
	}
	return (array);
}
