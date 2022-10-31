#include "lists.h"

/**
 * strln - computes length of a string
 * @str: the given string
 *
 * Return: the length of str
 */

unsigned int strln(char *str)
{
	unsigned int n = 0;

	if (str == NULL)
		return (0);
	while (str)
	{
		n++;
		str++;
	}
	return (n);
}

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
<<<<<<< HEAD
	const char *s;
=======
>>>>>>> a76ea662eb455aba5f5f3eb0e5be05c01445af0b

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
<<<<<<< HEAD
	tmp->str = s;
	tmp->next = NULL;
	if (*head == NULL)
=======
	tmp->str = strdup(str);
	tmp->len = strln(tmp->str);
	tmp->next = NULL;
	if (head == NULL)
>>>>>>> a76ea662eb455aba5f5f3eb0e5be05c01445af0b
		*head = tmp;
	else
	{
		tmp->next = *head;
		*head = tmp;
	}
	return (*head);
}
