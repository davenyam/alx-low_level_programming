#include "main.h"

/**
 * is_prime_number - checks if an integer is prime
 *
 * @n: the integer to be checked
 * @start: the divisor to start checking from
 * Return: 1 if n is prime, 0 otherwise
 */
int isPrime(int n, int start);
int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (isPrime(n, start));
}

/**
 * is_prime - checks if an integer is prime recursively
 *
 * @n: the integer to be checked
 * @start: the divisor to start checking from
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int isPrime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (isPrime(n, start - 1));
}
