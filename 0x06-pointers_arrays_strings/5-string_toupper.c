#include "main.h"

/**
 * string_toupper - converts lower case strings to uppercase strings
 * @s: input string to be converted
 *
 * Return: upper case strings
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		if ((*(s + i) <= 122) && (*(s + i) >= 97))
			*(s + i) = *(s + i) - 32;
		i++;
	}
	return (s);
}
