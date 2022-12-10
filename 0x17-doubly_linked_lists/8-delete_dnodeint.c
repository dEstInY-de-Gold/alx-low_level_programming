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

/**
 * delete_dnodeint_at_index - Deletes a node at given index
 * @head: pointer to head node
 * @index: index to locate node
 *
 * Return: 1 on success, or -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr;
	int l1, l2;

	l1 = dlistint_len(*head);
	if (index == 0)
	{
		(*head) = (*head)->next->next;
		free((*head)->next);
		return (1);
	}
	ptr = (*head);
	while (index > 0)
	{
		index--;
		ptr = ptr->next;
		if (index == 1)
		{
			ptr = ptr->next->next;
			free(ptr->next);
		}
	}
	l2 = dlistint_len(*head);
	if (l1 - l2 == 1)
		return (1);
	return (-1);
}
