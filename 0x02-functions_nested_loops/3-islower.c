#include <ctype.h>
#include <stdio.h>

/**
 * _islower - return 1 if c is lowercase else return 0
 *
 * @c: letter c
 * Return: 1 if c is lowercase else return 1
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
