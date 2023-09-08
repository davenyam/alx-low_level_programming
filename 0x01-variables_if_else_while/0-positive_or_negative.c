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
	int n = rand();

	srand(time(NULL));
	if (n > 0)
	{
	printf("The number %d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("The number %d is zero\n", n);
	}
	else
	{
	printf("The number %d is negative\n", n);
	}
	return (0);
}
