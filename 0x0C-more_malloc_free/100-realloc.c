#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory
 *
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 *
 * Return: new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;

	p = malloc(new_size);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size >= old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			*((char *)p + i) = *((char *)ptr + i);
		}
		free(ptr);
		return (p);
	}

	return (p);
}
