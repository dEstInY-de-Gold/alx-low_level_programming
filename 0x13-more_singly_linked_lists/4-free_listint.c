#include "lists.h"

/**
 * free_listint - free memory back to system
 * @head: head node
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
