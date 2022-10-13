#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints name to stdout
 * @name: name to be printed
 * @f: funtion pointer.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		if (name != NULL)
			(f)(name);
	}
}
