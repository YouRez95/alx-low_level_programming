#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add node at the begining
 *
 * @head: address of the head
 * @n: integer
 *
 * Return: head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;

	if (*head == NULL)
		ptr->next = NULL;
	else
		ptr->next = *head;

	*head = ptr;
	return (*head);
}
