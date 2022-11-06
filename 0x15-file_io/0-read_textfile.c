#include "main.h"

/**
 * read_textfile - Reads a text file and outputs it
 * @filename: pointer to file location
 * @letters: the number of letters to be read and printed
 *
 * Return: read text to stdout or 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t count, fd_r;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fd_r = read(fd, buffer, letters);
	if (fd_r == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	count = write(STDOUT_FILENO, buffer, fd_r);
	if (count == -1)
	{
		free(buffer);
		close(fd_r);
		close(fd);
		return (0);
	}
	free(buffer);
	close(count);
	close(fd_r);
	close(fd);

	return (count);
}
