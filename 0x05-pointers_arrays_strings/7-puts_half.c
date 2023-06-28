#include <string.h>
#include "main.h"
/**
 * puts_half - print every other character of a string
 *
 * @str: input string
 */
void puts_half(char *str)
{
	unsigned long int i;



	for (i = strlen(str) / 2 + 1 ; i < strlen(str) ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
