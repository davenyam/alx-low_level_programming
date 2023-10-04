#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
    char *x;
    int i, j = 0;

    if (str == NULL)
        return (NULL);

    for (i = 0; str[i]; i++)
        j++;

    x = malloc(sizeof(char) * (j + 1));

    if (x == NULL)
        return (NULL);

    for (i = 0; str[i]; i++)
        x[i] = str[i];

    x[j] = '\0';

    return (x);
}
