#include "lists.h"

/**
 *list_len: returns the number of elements in a list
 *
 *Return: lenght of given list
 */

size_t list_len(const list_t *h)
{
	size_t list_len;
	list_len = 0;
	list_t *curr = h;
	while (curr != NULL)
	{
		list_len++;
		curr = curr->next;
	}
	return (list_len);
}
