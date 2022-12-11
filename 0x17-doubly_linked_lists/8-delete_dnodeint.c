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
	dlistint_t *ptr, *node;
	int l1, l2;

	l1 = dlistint_len(*head);
	ptr = (*head);
	if (ptr == NULL)
		return (-1);
	else if (ptr != NULL && index == 0)
	{
		node = ptr;
		ptr = node->next;
		ptr->prev = NULL;
	}
	else if (ptr != NULL && index > 0)
	{
		while (index > 0)
		{
			index--;
			ptr = ptr->next;
			if (index == 0)
			{
				node = ptr;
				ptr = node->next;
				ptr->prev = node->next;
				node->prev = node->next;
			}
		}
	}
	free(node);
	l2 = dlistint_len(*head);
	if (l1 - l2 == 1)
		return (1);
	return (-1);
}
