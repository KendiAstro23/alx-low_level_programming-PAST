#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - deletes the head node
 * @head: beginning
 * Return: head
 */
int pop_listint(listint_t **head)
{
	int data;

	listint_t *temp = *head;

	data = temp->n;
	{
		*head = (*head)->next;
		free(temp);
		return (data);
	}
	if (*head == NULL)
		return (0);
}
