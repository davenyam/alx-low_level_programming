#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: The integer value stored in the head node.
 *         0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *i;
	int i;

	if (!head || !*head)
		return (0);

	i = (*head)->n;
	i = (*head)->next;
	free(*head);
	*head = i;

	return (i);
}
