#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - add a new node in the begining
 *
 * @head: pointer to the first node
 * @str: string
 *
 * Return: address of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
