#include "lists.h"

/**
 * list_len - prints length of linked list
 * @h: list head
 *
 * Return: lentgth of list
 */

size_t list_len(const list_t *h)
{
<<<<<<< HEAD
	size_t nodes;
	const list_t *tmp;

	nodes = 0;
	tmp = h;
	while (tmp)
=======
	size_t nodes = 0;
	const list_t* tmp = h;

	if (tmp == NULL)
		return (0);
	while (tmp != NULL)
>>>>>>> a76ea662eb455aba5f5f3eb0e5be05c01445af0b
	{
		nodes++;
		tmp = tmp->next;
	}
	return (nodes);
}
