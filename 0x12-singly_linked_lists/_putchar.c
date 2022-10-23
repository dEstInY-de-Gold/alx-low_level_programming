#include <unistd.h>

/**
 * _putchar - prints a single character to stdout
 * @c: character to print
 *
 * Return: 1 on success or,
 * 0 and error message set appropriately.
 */

int  _putchar(char c)
{
	return (write(1, &c, 1));
}
