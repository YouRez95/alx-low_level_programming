#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - free all lists
 *
 * @head: first node
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head)
	{
		ptr = *head;
		(*head) = (*head)->next;
		free(ptr);
	}
	ptr = NULL;
	*head = NULL;
}
