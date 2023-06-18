#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int first_digit, second_digit;

	for (first_digit = 0 ; first_digit <= 9 ; first_digit++)
	{
		for (second_digit = 0 ; second_digit <= 9 ; second_digit++)
		{
			if (first_digit == second_digit || first_digit > second_digit)
			{
				continue;
			}
			putchar('0' + first_digit);
			putchar('0' + second_digit);
			if (first_digit == 8 && second_digit == 9)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
