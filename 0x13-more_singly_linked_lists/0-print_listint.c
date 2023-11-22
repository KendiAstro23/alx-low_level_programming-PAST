#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - prints the elements in a list
 * @h: list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
