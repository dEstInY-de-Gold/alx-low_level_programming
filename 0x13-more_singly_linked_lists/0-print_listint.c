#include "lists.h"

/**
 * print_listint - prints contents of a list.
 *@h: head to linked list
 *
 * Return: number of link items.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *tmp = h;

/*	tmp = h; */
	if (tmp == NULL)
		return (0);
	while (tmp != NULL)
	{
		if (!(tmp->n))
		{
			count++;
			tmp = tmp->next;
			continue;
		}
		printf("%d\n", tmp->n);
		count++;
		tmp = tmp->next;
	}
	return (count);
}
