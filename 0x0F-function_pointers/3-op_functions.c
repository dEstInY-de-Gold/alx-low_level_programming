#include <stdlib.h>
#include "3-calc.h"


/**
 * op_add - adds to integers
 * @a: 1st integer parameter
 * b: 2nd integer parameter
 *
 * Return: the result.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - gets difference between two integers
 * @a: 1st int parameter
 * @b: 2nd int parameter
 *
 * Return: the result.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: 1st int parameter
 * @b: 2nd int parameter
 *
 * Return: the result
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - divides a by b
 * @a: numerator
 * @b: denumerator
 *
 * Return: the result.
 */

int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - finds remainder of a division
 * @a: numerator
 * @b: denumerator
 *
 * Return: result
 */

int op_mod(int a, int b)
{
	return (a % b);
}
