#include "main.h"
/**
 * print_diagonal - function that prints a diagonal line.
 * @n: number of \\ to be printed.
 * Return: void
 */
void print_diagonal(int n)
{
	int a = 0, b;

	while (a < n && n > 0)
	{
		b = 0;

		while (b < a)
		{
			_putchar(' ');
			b++;
		}
		_putchar('\\');
		_putchar('\n');
		a++;
	}
	if (a == 0)
	{
		_putchar('\n');
	}
}
