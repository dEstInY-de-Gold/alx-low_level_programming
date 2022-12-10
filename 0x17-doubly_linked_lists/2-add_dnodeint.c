#include "lists.h"

/**
 * add_dnodeint - Adds a new node at beginning
 * @head: pointer to head node
 * @n: Data to be inserted
 *
 * Return: A pointer to the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = (*head);
	new->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = new;
	(*head) = new;
	return (*head);
}
