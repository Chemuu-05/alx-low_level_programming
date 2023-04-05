#include "main.h"
#include <stdio.h>

int check_prime(int n, int p);

/**
 * is_prime_number - Returns 1 if a number is prime
 * @n: the number to be checked
 * Return: integer value
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (1);
	}
	return (check_prime(n, 1));
}
/**
 * check_prime - Check if number is prime
 * @n: the number to be checked
 * @p: the iteration times
 * Return: 1 for prime or 0 otherwise
 */

int check_prime(int n, int p)
{
	if (n <= 1)
		return (0);

	if (n % p == 0 && p > 1)
		return (0);

	if ((n / p) < p)
		return (p);

	return (check_prime(n, p + 1));
}
