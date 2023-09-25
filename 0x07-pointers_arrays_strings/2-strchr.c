#include "main.h"
#include <stddef.h>

/**
 * _strchr - locate character in a string
 * @s: pointer to the null-terminated string to search
 * @c: character to locate
 *
 * Return: a pointer to the first occurrence of the character `c` 
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return s;
		}
		s++;
	}

	if (*s == c)
	{
		return s;
	}

	return NULL;
}
