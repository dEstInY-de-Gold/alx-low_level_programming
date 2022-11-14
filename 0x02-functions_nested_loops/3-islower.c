#include "main.h"

/**
 * _islower - checks is char is in lower case
 * @c: input parameter
 *
 * Return: 1 if islower or 0 otherwise
 */

int _islower(int c)
{
	if (!((c >= 56) && (c <= 90)))
		return (1);
	else
		return (0);
}
