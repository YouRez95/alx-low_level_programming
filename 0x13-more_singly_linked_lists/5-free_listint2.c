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
	listint_t *ptr, *tmp;

	ptr = *head;
	while (ptr)
	{
		tmp  = ptr->next;
		free(ptr);
		ptr = tmp;
	}
	*head = NULL;
}
