#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - calculate the sum
 *
 * @head: first node
 *
 * Return: empty list ? 0 : sum
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	tmp = head;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
