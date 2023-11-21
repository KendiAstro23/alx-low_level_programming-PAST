#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - prints the sum of data in a list
 * @head : beginning
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

