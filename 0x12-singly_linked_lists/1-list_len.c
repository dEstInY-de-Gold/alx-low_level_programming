#include "lists.h"

/**
 * list_len - prints length of linked list
 * @h: list head
 *
 * Return: lentgth of list
 */

size_t list_len(const list_t *h)
{
	size_t nodes;
	const list_t *tmp;

	nodes = 0;
	tmp = h;
	while (tmp)
	{
		nodes++;
		tmp = tmp->next;
	}
	return (nodes);
}
