#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates command-line arguments into a single string.
 * @ac: The number of command-line arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to a newly allocated string containing all the arguments
 * separated by newline characters, or NULL if ac is 0, av is NULL, or memory
 * allocation fails.
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int a, b, i, j = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			j++;
	}

	s = malloc(sizeof(char) * j + 1);

	if (s == NULL)
		return (NULL);

	i = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			s[i++] = av[a][b];

		s[i++] = '\n';
	}

	s[j] = '\0';

	return (s);
}
