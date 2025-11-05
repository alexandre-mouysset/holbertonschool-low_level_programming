#include "main.h"

/**
 * checking_prime_number - recursively checks if a number is prime
 * @n: number to check
 * @i: current divisor
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int checking_prime_number(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (checking_prime_number(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the integer is a prime number, otherwise 0
 * @n: number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (checking_prime_number(n, 2));
}
