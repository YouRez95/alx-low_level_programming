#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_listint - print the list of integers inside nodes
 *
 * @h: head
 *
 * Return: numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		counter++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (counter);
}
