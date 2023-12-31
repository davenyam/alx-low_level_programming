#include "main.h"
#include <stdio.h>

/**
 * _strcpy -  copies a string into a destinated variable
 * @dest: destination char
 * @src: source char
 * Return: a string of characte
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int i = 0;

	while (src[l] != '\0')
	{
		l++;
	}

	for (i = 0; i <= l ; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
