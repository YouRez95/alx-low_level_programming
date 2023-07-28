#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adding new node at the end
 *
 * @head: pointer to the first node
 * @str: string
 *
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *temp, *last_node;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = temp;
	}
	return (*head);
}
