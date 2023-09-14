#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 *
 * @head: head
 * @index: index
 *
 * Return: the node if exist else NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count;

	temp  = head;
	if (temp == NULL)
		return (NULL);
	count = 0;
	while (temp != NULL)
	{
		if (count == index)
			return (temp);
		temp = temp->next;
		count++;
	}

	return (NULL);

}
