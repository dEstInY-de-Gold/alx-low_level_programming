#include "lists.h"

/**
 * free_listint - Free memory of a d-linked list
 * @head: pointer to head of the d-linked list
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		exit (EXIT_SUCCESS);
	else
	{
		while (head->next != NULL)
		{
			head = head->next;
			free(head->prev);
		}
		free(head);
	}
}
