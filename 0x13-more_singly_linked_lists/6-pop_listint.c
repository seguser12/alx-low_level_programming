#include "lists.h"

/**
 * pop_listint - deletes the head node of alinked list
 * @head: pointer to list to first element in the linked list
 *
 * Return: the data inside the elements that waas deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
