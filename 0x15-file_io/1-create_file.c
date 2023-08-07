#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * create_file - creating a file with permission -rw----- and write inside it
 *
 * @filename: filename
 * @text_content: text want to write
 *
 * Return: 1 success -1 failed
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	w = write(fd, text_content, strlen(text_content));
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
