#include "main.h"

/**
 * swap_int - swap two integer variable
 * @*a: first argument
 * @*b: second argument
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
