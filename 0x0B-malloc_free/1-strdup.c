#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy
 * of the string given as a parameter
 *
 * @str: my string
 *
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *my_string;

	my_string = (char *)malloc(sizeof(char)  - 1);
	if (my_string == NULL || str == NULL)
		return (NULL);
	my_string = strdup(str);
	return (my_string);
}
