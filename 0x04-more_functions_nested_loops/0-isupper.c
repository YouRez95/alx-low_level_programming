#include <ctype.h>

/*
 * _isupper - checks the argument if it uppercase
 *
 * @c: params
 *
 * Return: 1 if c  upper else 0
 */

int _isupper(int c)
{
	int a;

	if (isupper(c))
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	return (a);
}
