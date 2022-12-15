#include <stdio.h>
/**
 * main - program that prints the sum of all multiples of 3 or 5 below
 * 1024 (excluded), followed by a new line.
 *
 * return: Always 0 (Success).
 */
int main(void)
{
	unsigned long int three, five, sum;
	int multi;

	three = 0;
	five = 0;
	sum = 0;

	for (multi = 0; multi < 1024; multi++)
	{
		if ((multi % 3) == 0)
		{
			three = (three + multi);
		}
		else if ((multi % 5) == 0)
		{
			five = (five + multi);
		}
	}
	sum = three + five;
	printf("%ul\n", sum);
	return (0);
}
