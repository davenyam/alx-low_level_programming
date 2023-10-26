#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: A pointer to the new head of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *i = NULL;
	listint_t *j = NULL;

	while (*head)
	{
		j = (*head)->j;
		(*head)->j = i;
		i = *head;
		*head = j;
	}

	*head = i;

	return (*head);
}
