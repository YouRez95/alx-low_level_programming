#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add node at the end
 *
 * @head: first node
 * @n: int
 *
 * Return: head
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *tmp;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
		*head = ptr;
	else
	{
		tmp = *head;
		while (tmp->next)
		{
			tmp = tmp->next;
		}

		tmp->next = ptr;
	}
	return (*head);
}
