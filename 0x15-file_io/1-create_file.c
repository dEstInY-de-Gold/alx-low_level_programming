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
 * create_file - create a new file.
 * @filename: name of file to be created.
 * @text_content: content to write into file.
 *
 * Return: 1 on success or -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t crt;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		len = _strlen(text_content);
	crt = write(fd, text_content, len);
	if (crt == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
