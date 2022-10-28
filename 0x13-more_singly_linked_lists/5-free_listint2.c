#include "lists.h"

/**
 * free_listint2 - frees memory again
 * @head: pointer to head node
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while ((*head) != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
