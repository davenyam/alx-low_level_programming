#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *Description: print alphabet from a - z
 * Return: (0)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
