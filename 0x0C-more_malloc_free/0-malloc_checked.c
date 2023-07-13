#include <stdlib.h>
/**
 * malloc_checked - allocate memory using malloc
 *
 * @b: the size of memory
 *
 * Return: if  failed status 98 else the pointer
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
