#include <stdio.h>

/*
 *combo - prints all possible combinations of single digits
 *main - integer type and void
 */

int main(void)
{
	int num;
	
	for (num = 0; num <= 9; num++)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return(0);
}
