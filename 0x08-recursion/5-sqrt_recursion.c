#include "main.h"

/**
 * _sqrt - function that returns the square of a number.
 * @n: number
 * @i: iterator
 * Return: Square root of n or -1 if n does not have a natural square root.
 */
int _sqrt(int n, int i)
{
	int sq = i * i;

	if (sq > n)
		return (-1);
	if (sq == n)
		return (i);
	return (_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion - function that returns the natural square root
 * of a number, n.
 * * @n: number
 * Return: Square root of n or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
