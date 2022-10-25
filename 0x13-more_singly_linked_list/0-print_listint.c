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

	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%i\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
