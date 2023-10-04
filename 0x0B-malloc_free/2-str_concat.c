#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to a newly allocated space in memory containing the
 * concatenated strings @s1 and @s2, or NULL if memory allocation fails.
 * If @s1 or @s2 is NULL, an empty string is assumed for that parameter.
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j = 0, k = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		k++;

	s = malloc(sizeof(char) * k);

	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		s[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		s[j++] = s2[i];

	return (s);
}
