#include "main.h"

/**
 * _putchar - prints character to stdout
 * @c: the char to print
 *
 * Return: 1 on success, or 0 otherwise and error message set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
