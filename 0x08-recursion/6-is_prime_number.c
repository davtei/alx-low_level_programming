#include "main.h"

/**
 * is_prime - function that returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: number
 * @i:  iterator
 * Return: 1 if n is prime, otherwise 0.
 */
int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	else if ((n % i == 0) && (i > 1))
		return (0);
	else if ((n / i) < i)
		return (1);
	return (is_prime(n, i + 1));
}
/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, oherwise return 0.
 * @n: number
 * Return:; 1 if n is prime, otherwise 0.
 */
int is_prime_number(int n)
{
	return (is_prime(n, 1));
}
