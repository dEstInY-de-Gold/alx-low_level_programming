#include "lists.h"

/**
 * get_dnodeint_at_index - Retreaves a node at a given index.
 * @head: head pointer
 * @index: index to retreave from
 *
 * Return: Indexed node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int count = index;

	ptr = head;
	while (count > 0)
	{
		ptr = ptr->next;
		count--;
		if (count == 0)
			return (ptr);
	}
	return (NULL);
}
