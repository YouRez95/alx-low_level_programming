#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverse linked list
 *
 * @head : first node
 *
 * Return: pointer to the first node  reversed
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	next = NULL;
	prev = NULL;
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
