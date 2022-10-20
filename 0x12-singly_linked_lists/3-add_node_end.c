#include "lists.h"

/**
 * add_node_end - adds new node at the end of list
 * @head: pointer to nodeptr
 * @str: new node
 *
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t len = 0;

	temp = *head;
	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (!(*head))
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
