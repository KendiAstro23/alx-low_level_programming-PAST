#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * list_len - length of linked list
 * @h: address
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}

