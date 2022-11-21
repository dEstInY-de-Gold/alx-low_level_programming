#include "main.h"

/**
 * rot13 - Encodes rot13 text
 * s: input string pointer
 *
 * Return: a pointer to encoded string
 */

char *rot13(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		if (!((s[index] >= 'a' && s[index] <= 'z') || (s[index] >= 'A' && s[index] <= 'Z')))
		{
			index++;
			continue;
		}
		else
		{
			if ((s[index] > 'm' && s[index] <= 'z') || (s[index] > 'M' && s[index] <= 'Z'))
				s[index] -= 13;
			else
				s[index] += 13;
		}
		index++;
	}
	s[index] = '\n';
	return (s);
}
