#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int digit;

	for (digit = 1 ; digit <= 9 ; digit++)
	{
		printf("%d", digit);
		if (digit == 9)
		{
			putchar('\n');
		}
	}
	return (0);
}
