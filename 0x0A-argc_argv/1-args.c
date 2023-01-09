#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: number of arguments passed to main.
 * @argv: array of pointers to strings of arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", (argc - 1));
	return (0);
}
