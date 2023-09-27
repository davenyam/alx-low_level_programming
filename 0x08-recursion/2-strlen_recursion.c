#include "main.h"

/**
 * int _strlen_recursion - returns the string lngth
 * 
 * @s - string value
 * 
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
