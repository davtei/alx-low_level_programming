#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * printing last digit, x
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int power = 1;

	while (x > 0)
	{
		power *= 10;
		x--
	}
	if (x > 5)
	{
		printf("Last digit of n is %d and is greater than 5\n", n % power);
	}
	else if (x == 0)
	{
		printf("Last digit of n is %d and is 0\n", n % power);
	}
	else
	{
		printf("Last digit of n is %d and is less than 6 and not 0\n", n % power);
	}
return (0);
}
