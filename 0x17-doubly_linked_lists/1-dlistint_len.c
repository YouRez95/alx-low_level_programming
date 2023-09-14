#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - calculate the number of nodes
 *
 * @h: head
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t counter_nodes;

	if (h == NULL)
		return (0);
	counter_nodes = 0;
	temp = h;

	while (temp != NULL)
	{
		counter_nodes += 1;
		temp = temp->next;
	}

	return (counter_nodes);
}
