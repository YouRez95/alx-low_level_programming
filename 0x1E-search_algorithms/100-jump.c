#include <math.h>
#include "search_algos.h"

/**
 * jump_back - jump back and active the linear search
 *
 * @array: pointer to the first element in the array
 * @i: first index
 * @value: the element we want searched
 * @jump: the jump value
 *
 * Return: -1 if not found else the index of element
 */

int jump_back(size_t i, int *array, int value, size_t jump)
{
	size_t j;

	printf("Value found between indexes [%lu] and [%lu]\n", i - jump, i);
	j = i;
	i = i - jump;
	while (i <= j)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

/**
 * jump_search - search for an element in an array of integers
 *
 * @array: pointer to the first element in the array
 * @size: size of the array
 * @value: the element we want searched
 *
 * Return: -1 if not found else the index of element
 */


int jump_search(int *array, size_t size, int value)
{
	double x;
	int jump;
	size_t i;

	if (!array)
		return (-1);

	if (array[0] == value)
		return (0);

	x = sqrt((double) size);
	jump = (size_t) x;

	for (i = 0; i < size; i += jump)
	{
		if (array[i] >= value)
		{
			i = jump_back(i, array, value, jump);
			return (i);
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (i + jump >= size)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", i, i + jump);
			while (i < size)
			{
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
				if (array[i] == value)
				{
					return (i);
				}
				i++;
			}
			return (-1);
		}
	}
	return (-1);
}
