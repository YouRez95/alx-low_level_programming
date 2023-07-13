#include <stdlib.h>
/**
 * array_range - create an array of integers
 *
 * @min: min number
 * @max: max number
 *
 * Return: if min > max or fails NULL else pointer
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; i <= (max - min) + 1 ; i++)
		ptr[i] = min + i;
	return (ptr);
}
