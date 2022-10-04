#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates a pointer to an allocated memory
 *
 * @size: parameter with the size of the array
 * @c: element of the array
 *
 * Return: Return a pointer tothe address of the value
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	a = malloc(sizeof(char) * size);
	if (size == 0)
		return (0);
	else if (a == NULL)
		return (0);

	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
