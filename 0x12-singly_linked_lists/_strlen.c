#include "lists.h"

/**
 * _strlen - computes length of strong
 * @str: input string
 *
 * Return: length of string
 */

int _strlen(char *str)
{
	int len = 0;

	while (str)
	{
		len++;
		str++;
	}
	return (len);
}
