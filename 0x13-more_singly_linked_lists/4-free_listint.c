#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the head of the list.
 *
 * Description: This function frees all the nodes in a listint_t list.
 */
void free_listint(listint_t *head)
{
	listint_t *i;

	while (head)
	{
		i = head->next;
		free(head);
		head = i;
	}
}
