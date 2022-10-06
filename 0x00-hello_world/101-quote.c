#include <unistd.h>

/**
 * main - prints to stdout
 *
 * Return: always zero
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
