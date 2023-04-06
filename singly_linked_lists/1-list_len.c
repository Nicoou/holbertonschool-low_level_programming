#include <stdio.h>
#include "lists.h"

/**
 * print_len - 
 *
 * @h: is an Structure.
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t lenght = 0;

	while (h != NULL)
	{
		h ->h = next;
		lenght++;
	}
	return (lenght);
}
