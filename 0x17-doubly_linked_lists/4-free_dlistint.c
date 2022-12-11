#include "lists.h"

/**
 * free_dlistint - Free memory of a d-linked list
 * @head: pointer to head of the d-linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head, *next;

	if (ptr == NULL)
		free(ptr);
	else
	{
		while (ptr != NULL)
		{
			next = ptr->next;
			free(ptr);
			ptr = next;
		}
	}
}
