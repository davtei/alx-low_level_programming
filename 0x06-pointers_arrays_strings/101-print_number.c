#include "main.h"

/**
 * print_number - function that prints an integer,
 * using only _putchar.
 * @n: the integer to be printed.
 */
void print_number(int n)
{
	unsigned int no = n;

	if (n < 0)
	{
		_putchar('-');
		no = -no;
	}
	if ((no / 10) > 0)
	{
		print_number(no / 10);
	}
	_putchar((no % 10) + '0');
}
