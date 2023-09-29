#include "main.h"

/**
 * main - Prints the number of arguments passed into the program.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int count;
	(void)argv;

	count = argc;
	if (count >= 0)
	{
		int digit;
		while (count > 0)
		{
			digit = count % 10;
			_putchar('0' + digit);
			count /= 10;
		}
		_putchar('\n');
	}

	return 0;
}
