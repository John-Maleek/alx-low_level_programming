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
	while (h != NULL)
	{
		list_len++;
		h = h->next;
	}
	return (list_len);
}
