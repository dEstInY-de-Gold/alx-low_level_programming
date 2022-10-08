#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate from s2
 *
 * Return: a pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conct;
	unsigned int i = 0, j = 0, k, l, h;

	if (s1 != NULL)
	{
		while (s1[i] != 0)
			i++;
	}
	else
		s1 = "";
	if (s2 != NULL)
	{
		while (s2[j] != 0)
			j++;
	}
	else
		s2 = "";
	if (j < n)
		k = j;
	else
		k = n;

	conct = malloc(sizeof(char) * (k + i + 1));
	if (conct == NULL)
		return (NULL);
	for (l = 0; l < i; l++)
		conct[l] = s1[l];
	for  (h = 0; h < k; h++)
		conct[i + h] = s2[h];
	conct[i + h] = 0;

	return (conct);
}
