#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * description -if-else statement
 * Return: (0) always - Success
 */
int main(void)
{
	int n;

	srand(time(NULL));
	if (n > 0)
	{
	printf("98 is positive\n", n);
	}
	else if (n == 0)
	{
	printf("0 is zero\n", n);
	}
	else
	{
	printf("-98 is negative\n", n);
	}
	return (0);
}
