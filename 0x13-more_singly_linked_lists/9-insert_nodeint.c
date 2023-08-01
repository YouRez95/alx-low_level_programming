#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at index
 *
 * @head: first node
 * @idx: index
 * @n: data
 *
 * Return: newNode ? newNode : NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *tmp;
	unsigned int i;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	tmp = *head;
	i = 0;
	if (*head == NULL)
	{
		return (NULL);
	}
	while (i < idx - 1)
	{
		tmp = tmp->next;
		if (!tmp)
		{
			free(newNode);
			return (NULL);
		}
		i++;
	}

	newNode->next = tmp->next;
	tmp->next = newNode;

	return (newNode);
}
