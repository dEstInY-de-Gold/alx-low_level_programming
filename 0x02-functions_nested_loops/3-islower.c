#include "main.h"

/**
 * _islower - checks if a char is in lower case
 * @c: input parameter
 *
 * Return: 1 if islower or 0 otherwise
 */

int _islower(int c)
{
	if (!((c >= 65) && (c <= 90)))
		return (1);
	return (0);
}
