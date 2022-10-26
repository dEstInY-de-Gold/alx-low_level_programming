#include "lists.h"

/**
 * pop_listint - deletes head node of linked list
 * @head: head node
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;

	tmp = *head;
	if (!(tmp))
		return (0);
	free(head);
	return (tmp->n);
}
