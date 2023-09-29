#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int cents, coinCount, i;
	int coins[] = {25, 10, 5, 2, 1};
	int numCoins = sizeof(coins) / sizeof(coins[0]);

	/* Check for the correct number of arguments */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert the input argument to an integer */
	cents = atoi(argv[1]);

	/* Handle negative input */
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	/* Calculate the minimum number of coins needed */
	coinCount = 0;
	for (i = 0; i < numCoins; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			coinCount++;
		}
	}

	/* Print the minimum number of coins needed */
	printf("%d\n", coinCount);

	return (0);
}
