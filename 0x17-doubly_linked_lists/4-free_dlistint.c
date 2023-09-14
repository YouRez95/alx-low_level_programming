#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free all memory
 *
 * @head: head
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}

}
