#include <string.h>
#include "main.h"
/**
 * puts_half - print every other character of a string
 *
 * @str: input string
 */
void puts_half(char *str)
{
	unsigned long int i, j;

	if (strlen(str) % 2 == 0)
	{
		j = strlen(str) / 2;
	}
	else
	{
		j = strlen(str) / 2 + 1;
	}

	for (i = j ; i < strlen(str) ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
