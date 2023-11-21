#include "lists.h"
#include <stdio.h>
/**
 * free_listint2 - frees list
 * @head: beginning
 * Return: freed list
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		*head = current;
	}
	if (*head == NULL)
		return;
}
