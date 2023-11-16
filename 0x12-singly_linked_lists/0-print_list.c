#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints the elements in a list
 * @h: address
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("[%lu] %s\n", node_count, (h->str != NULL ? h = str : "(nil)"));
		h = h->next;
		node_count++;
	}
	return (node_count);
}

