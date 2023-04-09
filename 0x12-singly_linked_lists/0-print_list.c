#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *print_list: prints all elements of a list
 *
 * Return: number of items in the linked list
 */

size_t print_list(const list_t *h)
{
	size_t list_len;
	
	list_len = 0;
   	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nill)");
		printf("[%d] %s\n", curr->len, curr->str);
		h = h->next;
		list_len++;
    	}
	return (list_len);
}
