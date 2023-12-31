#include <stdlib.h>
#include<stddef.h>
/**
 * array_iterator - execute a funtion n  times
 *
 * @array: pointer point to the array
 * @size: size of the array
 * @action: function pointer to two functions
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array != NULL && size != 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
