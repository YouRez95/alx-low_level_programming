#include <stdlib.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - add node at head
 *
 * @head: head
 * @n: data
 *
 * Return: pointer to  head
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *temp;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	temp = *head;
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	if (temp == NULL)
	{
		temp = newNode;
		*head = temp;
		return (*head);
	}

	newNode->next = temp;
	temp->prev = newNode;
	*head = newNode;
	return (*head);
}
