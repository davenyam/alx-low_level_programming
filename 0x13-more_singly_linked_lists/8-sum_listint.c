#include "lists.h"

/**
 * sum_listint - Calculates the sum of all integers in a list.
 * @head: A pointer to the head of the list.
 *
 * Return: The sum of all integers in the list.
 */
int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *j = head;

	while (j)
	{
		i += j->n;
		j = j->next;
	}

	return (i);
}
