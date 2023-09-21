#include "main.h"

/**
 * string_toupper - Converts lowercase characters in a string to uppercase
 * @s: The string to convert
 *
 * Return: A pointer to the modified string
 */
char *string_toupper(char *s)
{

	int i;

i = 0;
	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}

	return (s);
}