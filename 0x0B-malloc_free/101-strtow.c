#include "main.h"
#include <stdlib.h>

char **strtow(char *str);
int word_len(char *str);
int count_words(char *str);

/**
 * word_len - Calculate the length of a word in a string.
 * @str: The input string.
 *
 * This function calculates and returns the length of the word in the input
 * string @str starting from the current position until a space character or
 * the end of the string is encountered.
 *
 * Return: The length of the word in @str.
 */
int word_len(char *str)
{
	int i = 0, j = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		j++;
		i++;
	}

	return (j);
}

/**
 * count_words - Count the number of words in a string.
 * @str: The input string.
 *
 * This function counts and returns the number of words in the input string @str.
 * Words are separated by spaces.
 *
 * Return: The number of words in @str.
 */
int count_words(char *str)
{
	int i = 0, w = 0, j = 0;

	for (i = 0; *(str + i); i++)
		j++;

	for (i = 0; i < j; i++)
	{
		if (*(str + i) != ' ')
		{
			w++;
			i += word_len(str + i);
		}
	}

	return (w);
}

/**
 * strtow - Split a string into words.
 * @str: The input string.
 *
 * This function splits the input string @str into words (substrings separated
 * by spaces) and stores them in an array of strings. It returns a pointer to
 * this array of words. The last element of the array is set to NULL.
 *
 * Return: A pointer to an array of words extracted from @str, or NULL if
 * @str is NULL, empty, or if memory allocation fails.
 */
char **strtow(char *str)
{
	char **s;
	int i = 0, w, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	w = count_words(str);
	if (w == 0)
		return (NULL);

	s = malloc(sizeof(char *) * (w + 1));
	if (s == NULL)
		return (NULL);

	for (w = 0; w < w; w++)
	{
		while (str[i] == ' ')
			i++;

		letters = word_len(str + i);

		s[w] = malloc(sizeof(char) * (letters + 1));

		if (s[w] == NULL)
		{
			for (; w >= 0; w--)
				free(s[w]);

			free(s);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			s[w][l] = str[i++];

		s[w][l] = '\0';
	}
	s[w] = NULL;

	return (s);
}
