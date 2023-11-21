#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the nth node
 * @head: beginning
 * @index: address
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}

