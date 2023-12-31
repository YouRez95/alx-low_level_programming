#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n:  param
 *
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (n > 0)
	{
		_putchar('0' + last_digit);
		return (last_digit);
	}
	else
	{
		last_digit = -last_digit;
		_putchar('0' + last_digit);
		return (last_digit);
	}
}
