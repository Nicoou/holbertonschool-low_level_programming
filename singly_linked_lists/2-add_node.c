#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head : th first node
 * @str : string to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int n = 0;
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
		;
	newnode->str = strdup(str);
	newnode->len = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
