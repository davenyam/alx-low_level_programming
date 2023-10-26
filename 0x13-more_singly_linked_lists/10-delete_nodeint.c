#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index.
 * @head: A pointer to the head of the list.
 * @index: The index of the node to delete.
 *
 * Return: If the node is successfully deleted, it returns 1. Otherwise, -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *i = *head;
	listint_t *j = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(i);
		return (1);
	}

	while (i < index - 1)
	{
		if (!i || !(i->next))
			return (-1);
		i = i->next;
		i++;
	}

	j = i->next;
	i->next = j->next;
	free(j);

	return (1);
}
