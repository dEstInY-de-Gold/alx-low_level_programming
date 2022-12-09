#include "lists.h"

/**
 * free_listint - Free memory of a d-linked list
 * @head: pointer to head of the d-linked list
 */

void free_listint(dlistint_t *head)
{
	dlistint_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(ptr->prev);
	}
	free(ptr);
}
