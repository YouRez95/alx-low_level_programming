#include <string.h>
#include "main.h"
/**
 * puts2 - print every other character of a string
 *
 * @str: input string
 */
void puts2(char *str)
{
	unsigned long int i, j;

	for (i = 0 ; i < strlen(str) ; i++)
	{
		j  = i * 2;

		if (j > strlen(str))
		{
			break;
		}
		else
		{

			_putchar(str[i * 2]);
		}
	}
	_putchar('\n');
}
