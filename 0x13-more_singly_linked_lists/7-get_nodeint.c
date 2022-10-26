#include "lists.h"

/**
 * get_nodeint_at_index - retreaves node at a given index
 * @head: head node
 * @index: specified index to look for.
 *
 * Return: pointer to located node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int count = 0;

	tmp = head;
	if (!(tmp))
		return (NULL);
	while (tmp)
	{
		tmp = tmp->next;
		count++;
	}
	if (count < index)
		return (NULL);
	tmp = head;
	while (index > 0)
	{
		tmp = tmp->next;
		index--;
	}
	return (tmp);
}
