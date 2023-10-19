#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a linked list
 * @head: A pointer to the head of the list
 * @str: The string to be stored in the new node
 *
 * Return: A pointer to the head of the modified list, or NULL if it fails.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *j;
	int len;
	list_t *i, *k;

	i = malloc(sizeof(list_t));
	if (i == NULL)
		return (NULL);

	j = strj(str);
	if (str == NULL)
	{
		free(i);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	i->str = j;
	i->len = len;
	i->next = NULL;

	if (*head == NULL)
		*head = i;

	else
	{
		k = *head;
		while (k->next != NULL)
			k = k->next;
		k->next = i;
	}

	return (*head);
}
