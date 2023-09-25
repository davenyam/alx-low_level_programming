#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locate character in a string
 * @s: Pointer to the null-terminated string to search
 * @c: Character to locate
 *
 * Return: A pointer to the first occurrence of the character `c`
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
