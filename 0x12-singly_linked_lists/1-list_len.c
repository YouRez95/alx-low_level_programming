#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - calculate n the number of nodes
 *
 * @h: pointer to the first node
 *
 * Return: n
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
