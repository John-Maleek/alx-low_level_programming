#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *list_t: adds a new node at the beginning of a linked list
 *
 *Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	size_t str_len;

	if (new_node == NULL)
		exit(1);
	for (str_len = 0; str[str_len]; str_len++)
		;
	new_node->str = strdup(str);
	new_node->next = *head;
	new_node->len = str_len;

	*head = new_node;
	return (*head);
}
