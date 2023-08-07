#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * append_text_to_file - append text to file
 *
 * @filename: filename
 * @text_content: text append to filename
 *
 * Return: 1 success -1 failed
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;


	fd = open(filename, O_WRONLY | O_APPEND);
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
