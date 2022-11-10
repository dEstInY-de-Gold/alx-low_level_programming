#include "main.h"

/**
 * _strlen - computes string length
 * @str: input string
 *
 * Return: length of given string.
 */

size_t _strlen(char *str)
{
	size_t cnt = 0;

	while (*str)
	{
		cnt++;
		str++;
	}
	return (cnt);
}

/**
 * append_text_to_file - as named
 * @filename: name of file
 * @text_content: content to append
 *
 * Return: 1 on succes, or -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t len = 0;
	ssize_t wrt;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_RDWR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = _strlen(text_content);
		wrt = write(fd, text_content, len);
	}
	if (wrt == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
