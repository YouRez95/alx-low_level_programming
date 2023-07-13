#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenate two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: lenght of string 2 used
 *
 * Return: string1 + string2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	char *ptr;
	unsigned int y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		y = strlen(s1) + strlen(s2);
	else
		y = strlen(s1) + n;

	ptr = malloc(y);
	if (ptr == NULL)
		return (NULL);

	while (i < y)
	{
		if (i < strlen(s1))
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - strlen(s1)];
		i++;
	}
	ptr[y] = '\0';

	return (ptr);
}
