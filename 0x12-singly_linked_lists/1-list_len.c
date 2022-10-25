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
	struct list_s* tmp = h->next;

	while (tmp != NULL)
	{
		nodes++;
		tmp = tmp->next;
		if (tmp->next == NULL)
			nodes++;
	}
	return (nodes);
}
