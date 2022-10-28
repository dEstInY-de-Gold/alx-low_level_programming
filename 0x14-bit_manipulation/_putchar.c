#include "main.h"

/**
 * _putchar - prints a single character to stdout
 * @c: character to print
 *
 * Return: 0 on success, or
 * -1 and error message set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
