#include "lists.h"

/**
 * print_dlistint - prints elements of a double linked list
 * @h: head pointer to list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;
	const dlistint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		num++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (num);
}
