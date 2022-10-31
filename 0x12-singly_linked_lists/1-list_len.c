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
	const list_t* tmp = h;

	if (tmp == NULL)
		return (0);
	while (tmp != NULL)
	{
		nodes++;
		tmp = tmp->next;
	}
	return (nodes);
}
