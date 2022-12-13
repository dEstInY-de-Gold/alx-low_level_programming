#include "main.h"


/**
 * _strstr - locate the firs occurence of a substring
 * @haystack: main string
 * @needle: the substring
 *
 * Return: matching string
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b;

	a = b = 0;
	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
			b++;
		}
		if (needle[b] == '\0')
			return (haystack + a);
		a++;
	}
	return ('\0');
}
