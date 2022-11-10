#include "main.h"

/**
 * _strlen - computes string length
 * @str: input string
 *
 * Return: length of given string.
 */

size_t _strlen(char *str)
{
	size_t cnt = 0;

	while (*str)
	{
		cnt++;
		str++;
	}
	return (cnt);
}
