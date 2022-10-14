#include <unistd.h>
#include "variadic_functions.h"

/**
 * _putchar - prints character to stdout.
 * @c: charater to print
 *
 * Return: 1 on succes,
 * -1 and error message set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
