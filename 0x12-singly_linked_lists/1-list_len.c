#include "lists.h"

/**
 * list_len - finds no of elements in a linked list
 * @h: pointer to list
 *
 * Return: no of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
