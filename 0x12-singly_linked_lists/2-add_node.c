#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a linked list
 * @head: A pointer to the head of the list
 * @str: The string to be stored in the new node
 *
 * Return: A pointer to the newly created node, or NULL if it fails.
 */

list_t *add_node(list_t **head, const char *str)
{
	char *j;
	int len;
	list_t *i;

	i = malloc(sizeof(list_t));
	if (i == NULL)
		return (NULL);

	j = strdup(str);
	if (j == NULL)
	{
		free(i);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	i->str = j;
	i->len = len;
	i->next = *head;

	*head = i;

	return (i);
}
