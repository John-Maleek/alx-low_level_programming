#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *free_list: a function that frees a list
 *
 *Return: 0 always
 */

void free_list(list_t *head)
{
	list_t *curr = head;
	while (curr != NULL)
	{
		list_h *aux = curr;
		curr = curr->next;
		free(aux);
	}
	head = NULL;
}
