#include <stdlib.h>
/**
 * create_array - create array of chars
 *
 * @size: size of array
 * @c: the character
 *
 * Return: Null if size = 0 or it fails else a pointer
 */

char *create_array(unsigned int size, char c)
{
	char *my_array;
	unsigned int i = 0;

	my_array = (char *)malloc(size * sizeof(char));
	if (my_array == NULL || size == 0)
		return (NULL);
	while (i < size)
	{
		my_array[i] = c;
		i++;
	}

	return (my_array);

}
