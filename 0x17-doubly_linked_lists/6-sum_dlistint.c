#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - calculate sum of data inside node
 *
 * @head: head
 *
 * Return: sum if head not NULL else 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;
	if (temp == NULL)
		return (0);


	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
