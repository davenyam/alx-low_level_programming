#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers and prints the result.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		putchar('E');
		putchar('r');
		putchar('r');
		putchar('o');
		putchar('r');
		putchar('\n');
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	/* Handle negative result */
	if (result < 0)
	{
		putchar('-');
		result = -result;
	}

	if (result == 0)
	{
		putchar('0');
	}
	else
	{
		/* Calculate and print digits one by one */
		int divisor = 1;
		while (divisor <= result / 10)
		{
			divisor *= 10;
		}

		while (divisor > 0)
		{
			int digit = (result / divisor) % 10;
			putchar('0' + digit);
			divisor /= 10;
		}
	}

	putchar('\n');

	return (0);
}
