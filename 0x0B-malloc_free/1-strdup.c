#include <stdio.h>
#include <stdlib.h>

/**
 * strdup - a pointer newly allocated space in memory
 *
 * @str: Parameter with the read_only_string
 *
 * Return: a copy of array to the string
 */

char *_strdup(char *str)
{
	char *a;
	void *x = NULL;
	int n = 0, i = 0;

	if (str != NULL)
	{
		while (str[n] != 0)
			n++;
	}
	else
		return (x);

	a = malloc(sizeof(char) * (n + 1));
	if (a == NULL)
		return (0);
	else
	{
		while (i <= n)
		{
			a[i] = str[i];
			i++;
		}
		return (a);
	}
	return (0);
}
