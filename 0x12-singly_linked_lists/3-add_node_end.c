#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *add_node_end: adds a new node at the end of a given list
 *
 *Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	size_t str_len;

	if (new_node == NULL)
		return (NULL);
	for (str_len = 0; str[str_len]; str_len++)
		;
	new_node->len = str_len;
	new_node->next = NULL;
	new_node->str = strdup(str);

	if (*head == NULL)
	{
		*head = new_node;
		return;
	}

	list_t *curr = *head;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}

	curr->next = new_node;
	return (*new_node);
}
