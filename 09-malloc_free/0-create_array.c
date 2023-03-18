#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create array
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: array.
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(sizeof(char) * size);
	unsigned int a;

	if (size <= 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (array);
	}
	for (a = 0; a < size; a++)
	{
		array[a] = c;
	}
	return (array);
}
