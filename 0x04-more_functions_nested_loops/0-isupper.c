#include "main.h"

/**
 * _isupper - checks for lowercase character
 * @c: the character to be checked
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _isupper(int c)
{
	while (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
