#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - checking for the alphabet
 *
 * @c: parametr
 *
 * Return: 1 if c is letter else 0
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
