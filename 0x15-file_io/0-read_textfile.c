#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text  file and print it to STDOUT
 *
 * @filename: filename
 * @letters: number of letters should read and print
 *
 * Return: fails ? 0 : number of letters print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t r, w;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return  (0);
	buf = malloc(sizeof(char) * letters);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);
	if (w == -1)
		return (0);
	free(buf);
	close(fd);
	return (w);
}
