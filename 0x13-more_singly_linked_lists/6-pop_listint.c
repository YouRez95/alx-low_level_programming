#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - delete the head
 *
 * @head: the head
 *
 * Return: n
 */


int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);
	tmp = *head;
	n = tmp->n;
	tmp = tmp->next;
	free(*head);
	*head = tmp;
	return (n);
}
