#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at given index
 * @head: pointer to head node
 * @index: index to locate node
 *
 * Return: 1 on success, or -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t = ptr;
	int res;

	if (index == 0)
	{
		(*head) = (*head)->next->next;
		res = free((*head)->next);
		return (res);
	}
	ptr = (*head);
	while (index > 0)
	{
		index--;
		ptr = ptr->next;
		if (count == 1)
		{
			ptr = ptr->next->next;
			res = free(ptr->next);
		}
	}
	return (res);
}
