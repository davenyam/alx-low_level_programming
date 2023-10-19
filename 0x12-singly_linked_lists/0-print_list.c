#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints the elements of a linked list of strings
 * @h: A pointer to the head of the list
 *
 * Return: The number of nodes in the list.
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		i++;
		h = h->next;
	}

	return (i);
}
