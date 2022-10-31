#include "lists.h"

/**
 * _strlen - computes length of strong
 * @str: input string
 *
 * Return: length of string
 */

unsigned int _strlen(char *str)
{
	unsigned int len = 0;

	if (str == NULL)
		return (0);
	while (str)
	{
		len++;
		str++;
	}
	return (len);
}
