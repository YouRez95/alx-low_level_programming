#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print elements of nodes
 *
 * @h: head
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t number_of_nodes;

	if (h == NULL)
		return (0);
	temp = h;
	number_of_nodes = 0;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		number_of_nodes += 1;
	}
	return (number_of_nodes);
}
