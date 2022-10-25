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
	char *s;
	unsigned int l = _strlen(str);

	tmp = malloc(sizeof(list_t));
	s = strdup(str);
	if (tmp == NULL)
		return (NULL);
	tmp->str = s;
	tmp->len = l;
	tmp->next = NULL;
	if (head == NULL)
		head = &tmp;
	else
	{
		tmp->next = *head;
		head = &tmp;
	}
	return (tmp);
}
