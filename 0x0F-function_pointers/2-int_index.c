#include <stddef.h>
/**
 * int_index - search for an integer
 *
 * @array: pointer point to the array
 * @size: size of the array
 * @cmp: function pointer
 *
 * Return: index of first element if Success
 * -1 if no elements matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
