#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - calculate the number of elements
 *
 * @h: head
 *
 * Return: the number of elements in linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
