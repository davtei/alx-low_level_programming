#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds two numbers, and returns the result,
 * followed by a new line.
 * Prints 0, followed by a new line if no number is passed to the program.
 * Prints Error, followed by a new line and return 1 if one of the numbers
 * contain symbols that are not digits.
 * Assuming the two numbers and the result can be stored in an int.
 * @argc: number of arguments passed to main.
 * @argv: array of pointers to strings of arguments.
 * Return: Always 0 (Success), otherwise 1.
 */
int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if ((argv[i][j] < '0') || (argv[i][j] > '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
