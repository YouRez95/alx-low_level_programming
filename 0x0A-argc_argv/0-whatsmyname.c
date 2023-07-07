#include <stdio.h>
/**
 * main - Entry point
 *
 * @argc: counter
 * @argv: arrays of pointers
 *
 * Return: 0 always Success
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
