#include <unistd.h>

/**
 * _putchar - prints to stdout
 * @c: character to print to stdout
 *
 * Return: 1 on success or -1 otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
