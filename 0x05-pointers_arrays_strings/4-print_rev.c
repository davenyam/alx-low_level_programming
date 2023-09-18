#include "main.h"

/**
 * _print_rev - print reverse string
 * @s: pointer to the string
 * Return: void
 */
void _print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
