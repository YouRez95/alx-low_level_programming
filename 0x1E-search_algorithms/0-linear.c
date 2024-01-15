#include <stddef.h>
#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - serach for an element in an array of integers
 *
 * @array: pointer to the first element in the array
 * @size: size of the array
 * @value: the element we want searched
 *
 * Return: -1 if not found else tne index of element
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = %d\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
