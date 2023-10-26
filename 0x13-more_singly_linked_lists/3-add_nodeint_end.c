#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @n: The integer value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL on failure.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i;
	listint_t *j = *head;

	i = malloc(sizeof(listint_t));
	if (!i)
		return (NULL);

	i->n = n;
	i->next = NULL;

	if (*head == NULL)
	{
		*head = i;
		return (i);
	}

	while (j->next)
		j = j->next;

	j->next = i;

	return (i);
}
