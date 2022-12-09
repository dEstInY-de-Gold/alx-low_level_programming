#include "lists.h"

/**
 * sum_dlistint - Sums elements of a d-linked list
 * @head: pointer to head node
 *
 * Return: sum.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
