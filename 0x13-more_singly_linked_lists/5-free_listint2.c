#include "lists.h"

/**
 * free_listint2 - frees memory again
 * @head: pointer to head node
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		printf("(nil)");
	else
	{
		while (*head)
		{
			tmp = *head;
			*head = (*head)->next;
			if (tmp)
				free(tmp);
		}
	}
}
