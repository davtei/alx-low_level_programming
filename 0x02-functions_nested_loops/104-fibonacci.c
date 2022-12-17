#include <stdio.h>
/**
 * main - program the prints the first 90 terms in the Fibonacci
 * sequence, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int t = 0;
	unsigned long int a = 0, b = 1, f = 0;

	while (t < 100)
	{
		f = a + b;
		a = b;
		b = f;
		printf("%lu", f);

		if (t < 97)
		{
			printf(", ");
		}
		t++;
	}
	putchar('\n');
	return (0);
}
