#include <unistd.h>

/**
 * _putchar - prints a single character to stdout
 * @c: char to be printed
 *
 * Return: 1 on success or,
 * zero and error message set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
