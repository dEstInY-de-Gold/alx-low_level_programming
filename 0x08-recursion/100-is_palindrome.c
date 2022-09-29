#include "main.h"

/**
 * _string_counter - counts the length of a string.
 * @a: the given string.
 * @l: length of string a.
 * Return: int.
 */

int _string_counter(char *a, int l)
{
	return (*a == 0 ? l - 1 : _string_counter(a + 1, l + 1));
}

/**
 * _cmp - compares string and reversed string.*
 * @a: string.
 * @l: length.
 *
 * Return: int.
 */

int _cmp(char *a, int l)
{
	if (*a != *(a + l))
		return (0);
	else if (*a == 0)
		return (1);
	return (_cmp(a + 1, l - 2));
}

/**
 * is_palindrome - checks is a given string is polindrome
 * @s: input string
 *
 * Return: 1 if is polindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int l = _string_counter(s, 0);

	return (_cmp(s, l));
}
