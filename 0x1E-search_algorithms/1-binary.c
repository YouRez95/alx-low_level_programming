#include "search_algos.h"

/**
 * print_array -  print the sub array
 *
 * @array: pointer to the first element in the array
 * @low: first element in subarray
 * @high: last element in subarray
 *
 * Return: Nothing
 */

void print_array(int *array, int low, int high)
{

	printf("Searching in array: ");
	while (low <= high)
	{
		if (low < high)
			printf("%d, ", array[low]);
		else
			printf("%d", array[low]);
		low++;
	}
	printf("\n");
}

/**
 * binary_search - search for an element in an array of integers
 *
 * @array: pointer to the first element in the array
 * @size: size of the array
 * @value: the element we want searched
 *
 * Return: -1 if not found else the index of element
 */

int binary_search(int *array, size_t size, int value)
{
	int low, high;
	int mid;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;
	while (low <= high)
	{
		print_array(array, low, high);
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}

	return (-1);
}
