#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - concatenate two string
 *
 * @s1: string1
 * @s2: string2
 *
 * Return: concat string1 and string2
 */

char *str_concat(char *s1, char *s2)
{
	char *result;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	result = (char *)malloc(strlen(s1) + strlen(s2) + 1);

	memcpy(result, s1, strlen(s1));
	memcpy(result + strlen(s1),  s2, strlen(s2) + 1);

	return (result);
}
