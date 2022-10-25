#include "lists.h"

/**
 * add_nodeint - adds a node to beginning of linked list
 * @head: pointer to head of linked list
 * @n: data input
 *
 * Return: address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;

	return (tmp);
}
