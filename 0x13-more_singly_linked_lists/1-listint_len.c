#include "lists.h"

/**
 * listint_len - counts length of linked list
 * @h: pointer to head of list
 *
 * Return: length of list.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
/**
*	if (h->next == NULL)
*		return (count);
*/
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
