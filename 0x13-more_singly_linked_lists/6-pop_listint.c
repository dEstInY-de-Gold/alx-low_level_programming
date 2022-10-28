#include "lists.h"

/**
 * pop_listint - deletes head node of linked list
 * @head: head node
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	num = 0;
	tmp = &(*head);
	if (tmp == NULL)
		return (0);
	if (tmp->n)
		num = tmp->n;
	free(tmp);
	return (num);
}
