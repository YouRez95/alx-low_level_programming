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
	int len = strlen(s);

	if (len == 0)
	{
		return;
	}
	else
	{
		/*_putchar(s[len - 1]);*/
		s = s + len - 1;
		_putchar(*s);
		_print_rev_recursion(s);
	}
}
