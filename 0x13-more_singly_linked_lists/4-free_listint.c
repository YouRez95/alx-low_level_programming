#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - free all list
 *
 * @head: first node
 */

void free_listint(listint_t *head)
{
	listint_t *ptr, *tmp;

	ptr = head;
	while (ptr)
	{
		tmp = ptr;
		ptr = ptr->next;
		free(tmp);
	}
}
