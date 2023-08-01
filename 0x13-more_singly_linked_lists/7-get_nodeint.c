#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - get node at index
 *
 * @head: firs node
 * @index: index
 *
 * Return: node ? node : NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	i = 0;
	tmp = head;
	while (i != index)
	{
		tmp = tmp->next;
		i++;
	}

	if (!tmp)
	{
		return (NULL);
	}
	return (tmp);
}
