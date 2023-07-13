#include <stdlib.h>
/**
 * _calloc - return an array
 *
 * @nmemb: number of blocks
 * @size: size of each block
 *
 * Return: pointer with clear allocation
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	while (i < size * nmemb)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
