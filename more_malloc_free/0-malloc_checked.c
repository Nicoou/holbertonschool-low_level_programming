#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Returns a pointer to the allocated memory
 *
 * @b: adasd
 *
 * Return: a pointer
 **/

void *malloc_checked(unsigned int b)
{
	void *array = malloc(b);

	if (array == NULL)
		exit(98);

	return (array);
}
