#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node to end of list
 * @head: pointer to head node
 * @n: Data to be added
 *
 * Return: pointer to the new element.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *ptr;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = new;
		new->prev = NULL;
		return (*head);
	}
	ptr = (*head);
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new;
	new->prev = ptr;

	return (*head);
}
