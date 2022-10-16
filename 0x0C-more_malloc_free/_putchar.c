#include <unistd.h>

/**
 * _putchar - prints a single character to stdout
 * @c: input character
 *
 * Return: 1 on success,
 * or -1 otherwise and error message set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
