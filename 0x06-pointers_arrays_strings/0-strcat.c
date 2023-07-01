#include <string.h>
/**
 * _strcat - append two strings
 *
 * @dest: param1
 * @src: param2
 *
 * Return: pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	dest = strcat(dest, src);
	return (dest);
}
