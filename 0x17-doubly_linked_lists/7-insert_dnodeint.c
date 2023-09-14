#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * getNewNode - create new node
 *
 * @n: data
 *
 * Return: newNode
 */

dlistint_t *getNewNode(int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	return (newNode);
}


/**
 * insert_dnodeint_at_index - insert node at index
 *
 * @h: head
 * @idx: index
 * @n: data
 *
 * Return: newNode
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t  *newNode, *current, *currentNext;
	unsigned int counter;

	newNode = getNewNode(n);
	if (*h == NULL)
	{
		*h = newNode;
		return (*h);
	}
	if (idx == 0)
	{
		free(newNode);
		*h = add_dnodeint(h, n);
		return (*h);
	}
	counter = 1;
	current = *h;
	currentNext = current->next;
	while (currentNext != NULL)
	{
		if (counter == idx)
		{
			current->next = newNode;
			newNode->prev = current;
			currentNext->prev = newNode;
			newNode->next = currentNext;
			return (newNode);
		}
		counter++;
		currentNext = currentNext->next;
		current = current->next;
	}
	free(newNode);
	if (counter == idx)
	{
		newNode = add_dnodeint_end(h, n);
		return (newNode);
	}
	return (NULL);
}
