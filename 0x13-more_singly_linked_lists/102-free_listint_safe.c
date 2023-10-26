#include "lists.h"

/**
 * free_listint_safe - Frees a list of nodes safely.
 * @h: A pointer to a pointer to the head of the list.
 *
 * Return: The number of nodes freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	int j;
	listint_t *k;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		j = *h - (*h)->next;
		if (j > 0)
		{
			k = (*h)->next;
			free(*h);
			*h = k;
			i++;
		}
		else
		{
			free(*h);
			*h = NULL;
			i++;
			break;
		}
	}

	*h = NULL;

	return (i);
}
