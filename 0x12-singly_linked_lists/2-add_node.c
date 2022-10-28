#include "lists.h"

/**
 * add_node - adds node to beginning of list
 * @head: pointer to head node
 * @str: data variable
 *
 * Return: address of new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	const char *s;

	tmp = malloc(sizeof(list_t));
	s = strdup(str);
	if (tmp == NULL)
		return (NULL);
	tmp->str = s;
	tmp->next = NULL;
	if (*head == NULL)
		*head = tmp;
	else
	{
		tmp->next = *head;
		*head = tmp;
	}
	return (tmp);
}
