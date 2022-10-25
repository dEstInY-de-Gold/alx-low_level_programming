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
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			if (h->next != NULL)
				h = h->next;
			else
			{
				node++;
				break;
			}
		}
		node++;
	}
	return (node);
}
