#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * main - copie the content from av[1] to  the file av[2]
 *
 * @ac: counter
 * @av: arguments passed
 *
 * Return: 0 success failed exit code
 */

int main(int ac, char **av)
{
	char *buf;
	int fd, fd2;
	ssize_t r, w;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", av[1]);
		exit(98);
	}
	fd2 = open(av[2], O_RDWR | O_CREAT, 0664);

	buf = malloc(sizeof(char) * 1024);
	r = read(fd, buf, 1024);
	w = write(fd2, buf, r);
	if (buf == NULL || r == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", av[2]);
		exit(98);
	}

	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd2);
		exit(100);
	}

	return (0);
}
