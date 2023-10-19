#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a linked list and its nodes
 * @head: A pointer to the head of the list
 *
 * @head: A pointer to the head of the list to be freed.
 */

void free_list(list_t *head)
{
	list_t *i;

	while (head)
	{
		i = head->next;
		free(head->str);
		free(head);
		head = i;
	}
}
