#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Searches a integer.
 *
 * @array: Data structure.
 * @size: Size of the array.
 * @cmp: Pointer to function where the logic already given.
 *
 * Return: int.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x, a;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		/*passes the value of the array element at position "i"*/

		if ((*cmp)(array[x]) == 0)
		{
			a++;
		}
		if ((*cmp)(array[x]) != 0)
		{
			break;
		}
	}
	if (a == size)
		return (-1);

	return (a);
}
