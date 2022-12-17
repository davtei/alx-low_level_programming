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
	long int n, lg;

	n = 612852475143;
	for (lg = 2; lg <= n; lg++)
	{
		if (n % lg == 0)
		{
			n /= lg;
			lg--;
		}
	}
	printf("%ld\n", lg);
	return (0);
}
