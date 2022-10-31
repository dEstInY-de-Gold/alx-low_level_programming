#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: input number
 * @index: the index to search for
 *
 * Return: value at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int lp = 4294967296;
	unsigned int x = 0, st;
	int num;

	if (n == 0)
	{
		if (x < index)
			return (-1);
		return (0);
	}
	while (lp > 0)
	{
		if ((lp & n) == 0)
		{
			if (lp < n)
			{
/*				printf("lp>>1 = [%lu], n>>1 = [%lu]\n", lp >> 1, n); */
				x++;
				if (x == index + 1)
				{
					num = 0;
					st = x - 1;
				}
			}
		}
		else
		{
			x++;
			if (x == index + 1)
			{
				num = 1;
				st = x - 1;
			}
/*		printf("%lu\n", (lp & n)); */
		}
		lp >>= 1;
/*		printf("%lu\n", (lp & n));
		printf("lp>>1 = [%lu], n>>1 = [%lu]\n", lp >> 1, n);
*/
	}
/*	printf("x = [%d], st = [%d], index = [%d]\n", x, st, index);*/
	if (st < (index))
		return(-1);
	return (num);
}
