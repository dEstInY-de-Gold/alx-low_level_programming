#include "main.h"

/**
 * _strlen_recursion - calulates length of a string
 * @s: input string
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int len = 1;

	if (*s != '\0')
	{
		s++;
		len += _strlen_recursion(s);
		return (len);
	}
	return (0);
}
