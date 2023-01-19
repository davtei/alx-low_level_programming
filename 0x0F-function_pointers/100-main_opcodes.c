#include <stdio.h>
#include <stdlib.h>

/**
 * main - porgram that prints the opcodes of its own main function.
 * @argc: number of arguments passed to main
 * @argv: array of pointers to string of arguments
 * Return: If the number of args is not the correct one, prints Error,
 * followed by a new line, and exit with the status 1;
 * if the number of bytes is negative, prints Error, followed by a new line,
 * and exit with the status 2.
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int i, nbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < nbytes; i++)
	{
		printf(%02x", opc[i] & 0xFF);
		if (i != (nbytes - 1))
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
