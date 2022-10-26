#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given index
 * @head: pointer to head node
 * @idx: the location to insert new node
 * @n: the data value
 *
 * Return: address of inserted node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *newnode;
	unsigned int num;
	unsigned int i;

	tmp = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (0);
	newnode->n = n;
	newnode->next = NULL;
	i = 0;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	if (i < idx)
		return (NULL);
	num = idx;
	while (n >= 0)
	{
		tmp = tmp->next;
		num--;
	}
	newnode->next = tmp;
	tmp = newnode;
	return (newnode);
}
