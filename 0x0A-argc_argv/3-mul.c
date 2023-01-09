#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers, and returns the result,
 * followed by a new line.
 * Assuming the two numbers and the result can be stored in an integer.
 * Prints Error followed by a new line and return 1 if the program does not receive
 * two arguments.
 * Return: Always 0 (Success), otherwise 1.
 */
int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = (a * b);
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
