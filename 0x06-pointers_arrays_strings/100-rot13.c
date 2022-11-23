#include "main.h"

/**
 * rot13 - Encodes or decodes rot13 text
 * @s: input string for encoding or decoding
 *
 * Return: a pointer to encoded string
 */

char *rot13(char *s)
{
	int indx = 0;

	while (s[indx] != '\0')
	{
		if (!((s[indx] >= 'a' && s[indx] <= 'z') || (s[indx] >= 'A' && s[indx] <= 'Z')))
		{
			indx++;
			continue;
		}
		else
		{
			if ((s[indx] > 'm' && s[indx] <= 'z') || (s[indx] > 'M' && s[indx] <= 'Z'))
				s[indx] -= 13;
			else
				s[indx] += 13;
		}
		indx++;
	}
/*	s[index] = '\n';*/
	return (s);
}
