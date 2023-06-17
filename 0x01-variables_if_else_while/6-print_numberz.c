#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int digit;

	for (digit = 0 ; digit <= 9 ; digit++)
	{
		putchar('0' + digit);
		if (digit == 9)
		{
			putchar('\n');
		}
	}
	return (0);
}
