#include "lists.h"
#include <stdio.h>

/**
 * add_node_end - Adds a new node in the end.
 *
 * @head: the list to which it will be added.
 * @str: the value of str
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	list_t *last_node = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}

	else
	{
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}

		last_node->next = new_node;
	}

	return (new_node);
}
