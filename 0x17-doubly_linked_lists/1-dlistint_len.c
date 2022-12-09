#include "lists.h"

/**
 * dlistint_len - counts the number of members of a linked lists
 * @h: head pointer
 *
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t len = 0;

	ptr = h;
	while (ptr != NULL)
	{
		len++;
		ptr = ptr->next;
	}
	return (len);
}
