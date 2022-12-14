#include <stdio.h>

/**
 * main - program that prints the sum of the even-valued terms
 * (not exceeding 4,000,000) in the in the Fibonacci sequence,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	unsigned long int b, c, d, sum;

	b = 1;
	c = 2;
	sum = 0;

	for (a = 1; a <= 33; a++)
	{
		if (b < 4000000 && (b % 2) == 0)
		{
			sum = sum + b;
		}
		d = b + c;
		b = c;
		c = d;
	}
	printf("%lu\n", sum);
	return (0);
}
