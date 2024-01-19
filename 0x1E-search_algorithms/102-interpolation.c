#include "search_algos.h"

/**
 * calcul_position - calcul the position of the element
 *
 * @array: pointer to the first element in the array
 * @low: first index
 * @high: last index
 * @value: the element we want searched
 *
 * Return: pos
 */

int calcul_position(int high, int low, int *array, int value)
{
	size_t pos;
	double quotient;
	size_t diff;
	size_t multiply;

	quotient = (double)(high - low) / (array[high] - array[low]);
	diff = value - array[low];
	multiply = quotient * diff;
	pos = low + multiply;
	return (pos);
}

/**
 * check_position - chech the element of that position
 *
 * @array: pointer to the first element in the array
 * @low: first index
 * @high: last index
 * @value: the element we want searched
 *
 * Return: new position
 */

int check_position(int high, int low, int *array, int value)
{
	size_t pos;

	pos = calcul_position(high, low, array, value);
	printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
	return (pos);
}

/**
 * interpolation_search - searching element by using interploation search
 *
 * @array: pointer to the first element in the array
 * @size: size of the array
 * @value: the element we want searched
 *
 * Return: -1 if element not exist else the index of element
 */


int interpolation_search(int *array, size_t size, int value)
{
	int high, low;
	size_t pos;

	low = 0;
	high = size - 1;

	if (!array)
		return (-1);
	pos = calcul_position(high, low, array, value);
	if (array[size - 1] < value)
	{
		printf("Value checked array[%lu] is out of range\n", pos);
		return (-1);
	}
	if (array[pos] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		return (pos);
	}
	printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
	while (array[pos] != value)
	{
		if (array[pos] > value)
		{
			high = pos - 1;
			pos = check_position(high, low, array, value);
			if (array[pos] == value)
				return (pos);
		}
		else
		{
			low = pos + 1;
			pos = check_position(high, low, array, value);
			if (array[pos] == value)
				return (pos);
		}
	}
	return (-1);
}
