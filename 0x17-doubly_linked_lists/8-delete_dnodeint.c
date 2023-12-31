#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 *
 * @head: head
 * @index: index
 *
 * Return: 1 success -1 failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *firstNode, *secondNode, *thirdNode;
	unsigned int counter;

	if (*head == NULL)
		return (-1);
	firstNode = *head;

	if (index == 0)
	{
		if (firstNode->next != NULL)
			*head = firstNode->next;
		free(firstNode);
		return (1);
	}
	secondNode = firstNode->next;
	thirdNode = secondNode->next;

	counter = 1;
	while (thirdNode != NULL)
	{
		if (counter == index)
		{
			free(secondNode);
			firstNode->next = thirdNode;
			thirdNode->prev = firstNode;
			return (1);
		}
		counter++;
		firstNode = firstNode->next;
		secondNode = secondNode->next;
		thirdNode = thirdNode->next;
	}

	if (counter == index)
	{
		free(secondNode);
		firstNode->next = NULL;
		return (1);
	}
	return (-1);
}
