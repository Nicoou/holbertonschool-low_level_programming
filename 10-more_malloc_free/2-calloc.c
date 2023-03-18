#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array.
 *
 * @nmemb: Elements of the array.
 * @size: Size of elements.
 * Return: pointer.
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = (char *)malloc(nmemb * size);

	if (array == NULL)
		return (NULL);

	for (x = 0; x < nmemb * size; x++)
	{
		array[x] = 0;
	}
	return (array);
}
