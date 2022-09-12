#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - to print a random generated number
 *
 *is an int type that takes no argument
 */

int main (void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%n is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n");
	else
		printf ("%d is positive\n");
	return (0);
}	
