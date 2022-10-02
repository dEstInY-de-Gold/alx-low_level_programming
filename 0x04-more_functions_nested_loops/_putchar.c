#include <unistd.h>

/**
 * _putchar - Prints to stdout
 *@c: the stdin
 *
 *Return: int character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
