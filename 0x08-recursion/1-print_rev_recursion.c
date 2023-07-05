#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _print_rev_recursion - print string in revers
 *
 * @s: my  string
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	static int i, len;

	len = strlen(s);

	if  (i < len)
	{
		_putchar(s[len - i]);
		i++;
		_print_rev_recursion(s);
	}
	else
	{
		_putchar('\n');
		return;
	}
}
