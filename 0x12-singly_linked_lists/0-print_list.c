#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: pointer point to the first elements in linked list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;
	const list_t *ptr = NULL;

	ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[%d] (nil)\n", ptr->len);
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		counter++;
		ptr = ptr->next;
	}

	return (counter);
}
