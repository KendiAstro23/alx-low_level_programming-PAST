#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints the elements in a list
 * @h: list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}
	return (node_count);
}
