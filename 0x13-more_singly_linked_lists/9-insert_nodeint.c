#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given index.
 * @head: A pointer to the head of the list.
 * @idx: The index at which to insert the new node.
 * @n: The value to be stored in the new node.
 *
 * Return: If successful, a pointer to the newly added node. Otherwise, NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *j;
	listint_t *k = *head;

	j = malloc(sizeof(listint_t));
	if (!j || !head)
		return (NULL);

	j->n = n;
	j->next = NULL;

	if (idx == 0)
	{
		j->next = *head;
		*head = j;
		return (j);
	}

	for (i = 0; k && i < idx; i++)
	{
		if (i == idx - 1)
		{
			j->next = k->next;
			k->next = j;
			return (j);
		}
		else
			k = k->next;
	}

	return (NULL);
}
