#include <stdlib.h>
#include "lists.h"
/**
 * free_list - free
 *
 * @head: pointer
 */
void free_list(list_t *head)
{
	list_t *ptr = head;
	list_t *temp;

	while (ptr)
	{
		temp = ptr;
		ptr = ptr->next;
		free(temp->str);
		free(temp);
	}
}
