#include "lists.h"

/**
 * sum_listint - sums data of linked lists
 * @head: head node
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	tmp = head;
	if (tmp == NULL)
		return (0);
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
