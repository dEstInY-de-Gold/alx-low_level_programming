#include <string.h>
#include <unistd.h>


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - prints to stdout
 *
 * Return: always zero
 */

int main(void)
{
	int i = 0;
	char *str;

	str = "and that piece of art is useful\" - Dora Korpa, 2015-10-19\n";
	while (str[i] != '\n')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');

	return (1);
}
