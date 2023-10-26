#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @n: The integer value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL on failure.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *i;

	i = malloc(sizeof(listint_t));
	if (!i)
		return (NULL);

	i->n = n;
	i->next = *head;
	*head = i;

	return (i);
}
