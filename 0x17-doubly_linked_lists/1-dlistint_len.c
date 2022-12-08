#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: linked list to evaluate
 *
 * Return: number of elements in h
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len_list = 0;

	if (!h)
		return (0);

	while (h)
	{
		h = h->next;
		len_list++;
	}
	return (len_list);
}
