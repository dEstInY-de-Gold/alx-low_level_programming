#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts new node at given index
 * @h: head pointer
 * @idx: index to insert
 * @n: data to insert
 *
 * Return: address of new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *new;
	unsigned int count = idx;

	ptr = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	while (count > 0)
	{
		count--;
		ptr = ptr->next;
		if (count == 0)
		{
			new->next = ptr->next->next;
			ptr->next = new;
			new->prev = ptr;
			ptr = new;
		}
	}
	return (new);
}
