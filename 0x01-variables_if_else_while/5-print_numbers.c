#include <stdio.h>

/**
 * main - Count from zero to ten
 *
 * Return: always zero
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		printf("%d", num);
	printf("\n");
	/*exit status*/
	return (0);
}
