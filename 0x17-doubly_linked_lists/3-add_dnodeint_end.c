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
	ptr = *head;
	while (ptr != NULL)
	{
		if (ptr->next == NULL)
		{
			ptr->prev = new;
			new->next = ptr;
			ptr = new;
			break;
		}
		ptr = ptr->next;
	}
	return (*head);
}
