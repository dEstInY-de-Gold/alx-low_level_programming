#include <unistd.h>

/**
 * _putchar - prints character to stdio
 * @c: character to print
 *
 * Return: 1 on success.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
