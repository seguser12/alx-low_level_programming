#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: linked list of type listint_t
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		numb++;
		h = h->next;
	}

	return (numb);
}
