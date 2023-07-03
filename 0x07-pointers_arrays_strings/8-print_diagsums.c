#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 *
 * @a: the array
 * @size: size of x and y means a[s][s]
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int j;

	int sum_of_diagonal_one = 0;
	int sum_of_diagonal_two = 0;

		for (j = 0 ; j < size * size ; j++)
		{
			if (j % (size + 1) == 0)
				sum_of_diagonal_one += *(a + j);
			if (j != 0 && j != size * size - 1 && j % (size - 1) == 0)
				sum_of_diagonal_two += *(a + j);
		}
	printf("%d, %d\n", sum_of_diagonal_one, sum_of_diagonal_two);
}
