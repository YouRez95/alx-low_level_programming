#include <string.h>
/**
 * _memset - function fill the first n bytes
 * the memory area pointed to by s with the constant byte b
 *
 * @s: pointer char
 * @b: char
 * @n: first bytes to fill
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
