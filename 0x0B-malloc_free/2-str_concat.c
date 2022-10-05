#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two steings
 * @s1: first string
 * @s2: second string
 *
 * Return: address to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, g = 0, h = 0, l = 0;
	int ls1 = 0, ls2 = 0;
	char *ptr;
	void *x = NULL;

	if (s1 != NULL)
		while (s1[i] != '\0')
		{
			ls1++;
			i++;
		}
	else
		s1 = "";
	if (s2 != NULL)
		while (s2[j] != '\0')
		{
			ls2++;
			j++;
		}
	else
		s2 = "";
	l = ls1 + ls2;

	ptr = malloc(sizeof(char) * (l + 1));

	if (ptr == NULL)
		return (x);
	while (k < ls1)
	{
		ptr[k] = s1[h];
		k++;
		h++;
	}
	while (k < l)
	{
		ptr[k] = s2[g];
		g++;
		k++;
	}
	return (ptr);
}
