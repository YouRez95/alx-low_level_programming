#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int first, second, third;

	for (first = 0 ; first <= 9 ; first++)
	{
		for (second = 0 ; second <= 9 ; second++)
		{
			for (third = 0 ; third <= 9 ; third++)
			{
				if (first == second || second == third || first == third ||
				first > second || second > third)
				{
					continue;
				}
				putchar('0' + first);
				putchar('0' + second);
				putchar('0' + third);
				if (first == 7 && second == 8 && third == 9)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
