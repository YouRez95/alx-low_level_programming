#include <string.h>
/**
 * _strstr - finds the first occurrence of needle in  haystack
 *
 * @haystack:  string to be scanned
 * @needle: string to be searched
 *
 * Return: pointer to the first occurrence in haystack of
 * any of the entire sequence of characters specified in needle,
 * or a null pointer if the sequence is not present in haystack
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
