#include "lists.h"
#include <stdlib.h>

/**
 * print_dlistint - print all the elements of list.
 *
 * @h: an list.
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t leng = 0; /* count num of nodes */

	while (h != NULL) /* cont nodes */
	{
		printf("%d\n", h->n); /* prints the value of the current node */
		h = h->next; /* go to next node */
		leng++;
	}

	return (leng); /*returns the number of nodes */
}
