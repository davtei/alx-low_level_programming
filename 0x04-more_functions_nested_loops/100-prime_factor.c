#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * main - program that prints the largest prime factor of 612852475143,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n;
	long int maxi;
	long int z;

	n = 612852475143;
	maxi = -1;

	while (n % 2 == 0)
	{
		maxi = 2;
		n /= 2;
	}
	for (z = 3; z <= sqrt(n); z = z + 2)
	{
		while (n % z == 0)
		{
			maxi = z;
			n = n / z;
		}
	}
	if (n > 2)
	{
		maxi = n;
	}
	printf("%ld\n", maxi)
	return (0);
}
