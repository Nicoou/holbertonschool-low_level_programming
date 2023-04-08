#include "lists.h"

/**
 * add_dnodeint_end -  Adds a new node int in the end.
 *
 * @head: the list to which it will be added.
 * @n: the value of int.
 * Return: the address of the new element, or NULL if it failed.
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *actual_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	actual_node = *head;

	while (actual_node->next != NULL)
		actual_node = actual_node->next;

	actual_node->next = new_node;
	new_node->prev = actual_node;

	return (new_node);
}
