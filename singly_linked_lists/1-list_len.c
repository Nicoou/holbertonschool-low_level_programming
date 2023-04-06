#include <stdio.h>
#include "lists.h"

/**
 * list_len - return the number of elements
 *
 * @h: head node of each list_t.
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t lenght = 0;

	while (h = NULL)
	{
		h = h->next;
		lenght++;
	}
	return (lenght);
}
