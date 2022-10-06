#include <stdio.h>
#include <string.h>

/**
 * main - this returns the amount of bytes to store a data type variable in c
 *
 * Return: zero.
 */

int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;
	char *str;

	str = "size of long long int";
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(S)\n", (unsigned long)sizeof(i));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("%s: %lu byte(s)\n", str, (unsigned long)sizeof(lli));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
