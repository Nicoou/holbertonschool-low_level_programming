#include "function_pointers.h"

/**
 * array_iterator - Executed a parameter on each element of an array.
 *
 * @i: count elements in the array
 * @array: Data structure.
 * @size: Size of the array.
 * @action: function passed by parameters.
 *
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
