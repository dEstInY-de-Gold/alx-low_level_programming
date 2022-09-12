#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/*
 *Last digit of a given number
 *
 *main - declared with int and takes no argument
 */

int main(void)
{
	/*Declaration of int n*/
	int n;
	int last_digit;

	srand (time (0));
	/*Assigning a random value to n*/
	n = rand () - RAND_MAX / 2;
	/*Getting the last value of n*/
	last_digit = n % 10;
	/*Condition if last digit is 0*/
	if (last_digit == 0)
		printf ("Last digit of %d is %d and is zero\n", n, last_digit);
	/*Condition if last digit id less than 6 and greater than zero*/
	else if (last_digit <= 5)
		printf ("Last digit of %d is %d and is less than 6 and not zero\n", n, last_digit);
	/*Condition if last digit is greater than 5*/
	else
		printf ("Last digit of %d is %d and is greater than 5\n", n, last_digit);

	return (0);
}
