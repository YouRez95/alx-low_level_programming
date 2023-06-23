#include <ctype.h>

/**
 * _isdigit - checks the character c if it digit
 *
 * @c: params
 *
 * Return: 1 if c is a digit else 0
 */

int _isdigit(int c)
{
	int result;

	if (isdigit(c))
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
