#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
 *srand to print a randomly generated number
 *
 * main - an int type that takes no argument
 */

int main(void)
{
	int n;

	srand(time(0));
	/*generates a random number*/
	n = rand() - RAND_MAX / 2;
	/*checks if the generated numbers is negative, zero or positive*/
	if(n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);
	return (0);
}
