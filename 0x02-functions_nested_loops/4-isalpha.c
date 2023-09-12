#include "main.h"

/**
 * _isalpha - check if c is an alphabet
 * @c: contains the value of the alphabet
 * Return: returns 1 for an alphabet otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
