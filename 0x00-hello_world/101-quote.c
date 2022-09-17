#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 *main - prints quoted output
 */

/**
 *
 *_putchar - writes the character c to stdout
 *
 *   * @c: The character to print
 *
 *    *
 *
 *     * Return: On success 1.
 *
 *      * On error, -1 is returned, and errno is set appropriately.
 *
 *       */

int _putchar(char* c)
{
	return (write(1, c, strlen(c)));
}

int main (void)
{
	_putchar("and that piece of art is useful\" - Dora Korpa, 2015-10-19\n");
	return (0);
}
