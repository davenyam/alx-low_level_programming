#include "main.h"

/**
 * rev_string - Write a function that reverses a string
 *
 * @s: string var pointer
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	j = i - 1;

	i = 0;
	while (j >= i)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		j--;
		i++;
	}
}
