#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenate two strings, taking the first 'n' characters
 *                  from s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of characters from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL if memory allocation
 *         fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *i;
	unsigned int j = n, k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (k = 0; s1[k]; k++)
		j++;

	i = malloc(sizeof(char) * (j + 1));

	if (i == NULL)
		return (NULL);

	j = 0;

	for (k = 0; s1[k]; k++)
		i[j++] = s1[k];

	for (k = 0; s2[k] && k < n; k++)
		i[j++] = s2[k];

	i[j] = '\0';

	return (i);
}
