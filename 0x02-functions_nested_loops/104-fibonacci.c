#include <stdio.h>
/**
 * main - program the prints the first 98 terms in the Fibonacci
 * sequence, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	unsigned long one = 0, two = 1, fib;
	unsigned long one_half1, one_half2, two_half1, two_half2;
	unsigned long half1, half2;

	for (n = 0; n < 92; n++)
	{
		fib = one + two;
		printf("%lu, ", fib);

		one = two;
		two = fib;
	}

	one_half1 = one / 10000000000;
	two_half1 = two / 10000000000;
	one_half2 = one % 10000000000;
	two_half2 = two % 10000000000;

	for (n = 93; n < 99; n++)
	{
		half1 = one_half1 + two_half1;
		half2 = one_half2 + two_half2;
		if (one_half2 + two_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (n != 98)
			printf(", ");

		one_half1 = two_half1;
		one_half2 = two_half2;
		two_half1 = half1;
		two_half2 = half2;
	}
	printf("\n");
	return (0);
}
