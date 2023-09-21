#include "main.h"

/**
 * leet - Encodes a string into 1337 (leet speak)
 * @s: The string to encode
 *
 * Return: A pointer to the modified string
 */
char *leet(char *s)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == s[i])
				s[i] = b[j];
		}
	}

	return (s);
}
