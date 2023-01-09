#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins to make change for
 * an amount of money.
 * Usage : ./change cents; where cents if the amount of cents to give back.
 * If the number of arguments passed is not exactly 1, print Error,
 * followed by a new line, and return 1.
 * If a negative number is passed, print 0, followed by a new line.
 * Coins are of value : 25, 10, 5, 2, and 1 cent.
 * Use atoi to parse the parameter to program.
 * @argc: number of arguments passed to main.
 * @argv: array of pointers to strings of arguments.
 * Return: Always 0 (Success), otherwise 1.
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
