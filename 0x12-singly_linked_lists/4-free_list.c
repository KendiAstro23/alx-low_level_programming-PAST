#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - unlinks a list
 * @head: first node
 * Return:remaining list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

