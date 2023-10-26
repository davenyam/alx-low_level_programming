#include "lists.h"

/**
 * get_nodeint_at_index - Retrieves the node at a specific index in a list.
 * @head: A pointer to the head of the list.
 * @index: The index of the node to retrieve.
 *
 * Return: A pointer to the node at the specified index, or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *j = head;

	while (j && i < index)
	{
		j = j->next;
		i++;
	}

	return (j ? j : NULL);
}
