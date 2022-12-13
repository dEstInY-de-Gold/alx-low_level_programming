#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: input parameter to function
 *
 * Return: 1 if is alphabet or 0 otherwise
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
