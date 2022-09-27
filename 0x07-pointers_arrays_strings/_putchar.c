#include <unistd.h>

/**
 * _putchar - prints int to stdout
 * @c: input parameter
 *
 * Return: 1 on success, -1 otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
