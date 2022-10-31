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

	if (h == NULL)
		return (0);
	while (h)
	{
		if (!(h->str))
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		node++;
		printf("node = %lu\n", node);
	}
	return (node);
}
