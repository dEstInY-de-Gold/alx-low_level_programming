#include "lists.h"

/**
 * print_list - prints a list
 * @h: header node
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h->str == NULL && h->next == NULL)
			printf("[0] (nil)\n");
		else
		{
			if (h->str == NULL)
			{
				printf("[0] (nil)\n");
				node++;
				h = h->next;
			}
			else
			{
				printf("[%d] (%s)\n", h->len, h->str);
				node++;
				h = h->next;
			}
		}
	}
	return (node);
}
