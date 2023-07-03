#include <string.h>
/**
 * _strspn - calculate the length of the initial segment
 *
 * @s: string to be scanned
 * @accept: list of characters to match in s
 *
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
