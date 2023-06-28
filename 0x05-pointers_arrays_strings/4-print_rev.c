#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - print string in reverse
 *
 * @s: params
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i, length = strlen(s);

	for (i = 0 ; i < length + 1 ; i++)
	{
		_putchar(*(s + (length - i)));
	}
	_putchar('\n');
}
