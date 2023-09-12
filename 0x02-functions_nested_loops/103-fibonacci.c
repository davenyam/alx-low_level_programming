#include <stdio.h>

/**
 * main - Entry
 * Description: Print summation of even Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int a = 1, b = 2, sum = 0;
	int c;

	while (b < 4000000)
	{
		if (b % 2 == 0)
			sum += b;

		c = b;
		b += a;
		a = c;
	}
	printf("%d\n", sum);
	return (0);
}
