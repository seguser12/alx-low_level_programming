#include "lists.h"

/**
 * *add_node - adds a new node at beginning of a list
 * @head: pointer to node pointer
 * @str: string to add
 *
 * Return: address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	(*head) = new;

	return (new);
}
