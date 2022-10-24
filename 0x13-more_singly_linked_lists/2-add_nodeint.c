#include "lists.h"

/**
 * *add_nodeint - adds a node at the begininig of a list
 * @head: pointer to the first node in the list
 * @n: dat to insert in the new node
 *
 * Return: pointer to the new node, or null if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
