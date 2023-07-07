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
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
