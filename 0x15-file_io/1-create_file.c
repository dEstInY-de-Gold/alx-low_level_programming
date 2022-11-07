#include "main.h"

size_t _strlen(char *str)
{
	size_t cnt;

	while (*str)
	{
		cnt++;
		str++;
	}
	return (cnt);
}

/**
 * create_file - create a new file.
 * @text_content: content to write into file.
 *
 * Return: 1 on success or 0 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	char *buf;
	int fd;
	ssize_t crt;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	buf = (char*) malloc(sizeof(text_content));
	if (buf == NULL)
		return (-1);
	crt = write(fd, text_content, _strlen(text_content));
	if (crt == -1)
	{
		free(buf);
		close(fd);
		return (-1);
	}
	free(buf);
	close(fd);
	return (1);
}
