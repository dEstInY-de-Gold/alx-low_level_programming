#include "lists.h"

/**
 * add_nodeint_end - adds a node to end of link
 * @head: pointer to head node
 * @n: data
 *
 * Return: pointer to added node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *ptr;

	ptr = *head;
	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	if (*head == NULL)
		*head = tmp;
	else
	{
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = tmp;
	}
	return (tmp);
}
