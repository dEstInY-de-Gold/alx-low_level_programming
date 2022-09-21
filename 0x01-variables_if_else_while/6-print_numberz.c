#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9
 *
 * Return: zero
 */

int main(void)
{
	/*initialise a variable called num*/
	int n;

	/*set, increment and output the value num*/
	for (n = 0; n <= 9; n++)
		putchar('0' + n);
	/*a newline*/
	putchar('\n');
	/*exit value for main*/
	return (0);
}
