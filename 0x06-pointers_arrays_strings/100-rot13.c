#include <stdlib.h>
/**
 * rot13 - encodes a string using rot13
 *
 * @s: pointer
 *
 * Return: pointer
 */

char *rot13(char *s)
{
	char *p = s;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (; *s != '\0'; s++)
	{
		int i;

		for (i = 0; alphabet[i] != '\0'; i++)
		{
			if (*s == alphabet[i])
			{
				*s = rot13[i];
				break;
			}
		}
	}

	return (p);
}
