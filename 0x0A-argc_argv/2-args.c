#include <stdio.h>
/**
 * main - entry Point
 *
 * @argc: counter
 * @argv: arrays of pointers
 *
 * Return: 0 always Success
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc ; i++)
		printf("%s\n", argv[i]);
	return (0);
}
