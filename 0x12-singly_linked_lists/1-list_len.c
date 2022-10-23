#include "lists.h"

/**
 * list_len - prints length of linked list
 * @h: list head
 *
 * Return: lentgth of list
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h->next != NULL)
	{
		nodes++;
		h = h->next;
		if (h->next == NULL)
			nodes++;
	}
	return (nodes);
}
