#include <stdio.h>
#include <time.h>

/*
 *srand to print a randomly generated number
 *
 * main - an int type that takes no argument
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand - RAND_MAX / 2;
	
	/*check condition if n is a positive number*/
	if (n > 0){
		printf("%d is positive\n", n);
	}
	/*check condition if n is zero*/
	else if (n==0){
		printf("%d is zero\n", n);
	}
	else{
	/*check condition if n is a negative number*/
		printf("%d is negative\n", n);
	}
	return (0);
}
