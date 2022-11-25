#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	char s[] = "ROT13 (NOAH, Winnie, daayel, LETICIA, Ana'ambe.)\n";
	char *p;
	int i;

	p = rot13(s);
	printf("%s", p);
	printf("------------------------------------\n");
	printf("%s", s);
	printf("------------------------------------\n");
	p = rot13(s);
	printf("%s", p);
	printf("------------------------------------\n");
	printf("%s", s);
	printf("------------------------------------\n");
	p = rot13(s);
	printf("%s", p);
	printf("------------------------------------\n");
	printf("%s", s);

	for (i = 2; i <= ac; i++)
	{
		av[i] = rot13(av[i]);
		printf("%d ==> %s\n", i, av[i]);
	}
	return (0);
}
