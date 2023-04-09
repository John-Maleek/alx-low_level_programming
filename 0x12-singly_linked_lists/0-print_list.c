#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *print_list: prints all elements of a list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t list_len;
	list_len = 0;
	list_t *curr = h;
   	while (curr != NULL)
	{
		if(curr->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", curr->len, curr->str);
		}
		curr = curr->next;
		list_len++;
    	}
	return (list_len);
}
