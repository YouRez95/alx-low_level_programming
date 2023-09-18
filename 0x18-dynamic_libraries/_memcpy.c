#include <string.h>
/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 *
 * @dest: to
 * @src: from
 * @n: copies n bytes
 *
 * Return:  pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
