#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10x the alphabet,
 * in lowercase, followed by a line.
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char x;
	int z;

	for (z = 0; z <= 9; z++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
