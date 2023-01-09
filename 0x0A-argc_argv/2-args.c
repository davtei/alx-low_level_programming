#include <stdio.h>

/**
 * main - program that prints all arguments it receives,
 * including the first one.
 * Prints one argument per line, ending with a new line.
 * @argc: number of arguments passed to main.
 * @argv: array of pointers to strings of arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
