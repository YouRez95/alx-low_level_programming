#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

void closeFile(int);

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
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", av[2]);
		exit(99);
	}
	fd = open(av[1], O_RDONLY);
	r = read(fd, buf, 1024);
	if (fd == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", av[1]);
		free(buf);
		exit(98);
	}
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	w = write(fd2, buf, r);
	if (w == -1 || fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", av[2]);
		free(buf);
		exit(99);
	}
	closeFile(fd);
	closeFile(fd2);
	free(buf);
	return (0);
}

/**
 * closeFile - close file
 *
 * @fd: fd
 */
void closeFile(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
}
