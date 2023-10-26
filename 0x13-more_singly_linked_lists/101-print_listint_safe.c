#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of nodes in a looped list.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the loop or 0 if the list is not looped.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *t, *h;
	size_t i = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	t = head->next;
	h = (head->next)->next;

	while (h)
	{
		if (t == h)
		{
			t = head;
			while (t != h)
			{
				i++;
				t = t->next;
				h = h->next;
			}

			t = t->next;
			while (t != h)
			{
				i++;
				t = t->next;
			}

			return (i);
		}

		t = t->next;
		h = (h->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a list of nodes safely.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes printed.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, j = 0;

	i = looped_listint_len(head);

	if (i == 0)
	{
		for (; head != NULL; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (j = 0; j < i; j++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (i);
}
