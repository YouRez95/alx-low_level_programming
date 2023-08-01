#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delete at index
 *
 * @head: first node
 * @index: index
 *
 * Return: success 1 else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *delete;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	i = 0;
	temp = *head;
	delete = *head;
	if (index == 0)
	{
		temp = temp->next;
		free(delete);
		delete = NULL;
		*head = temp;
		return (1);
	}
	while (i < index - 1)
	{
		delete = delete->next;
		temp = temp->next;
		if (!temp)
			return (-1);
		i++;
	}

	delete = delete->next;
	if (!delete)
		return (-1);
	temp->next = delete->next;
	free(delete);
	delete = NULL;

	return (1);

}
