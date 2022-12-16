#include "main.h"
/**
 * print_numbers - function that prints the numbers,
 * from 0 to 9, followed by a new line.
 * Return: 0
 */
void print_numbers(void)
{
	char a = '0';

	while (a <= '9')
	{
		_putchar('0' + a);
		a++;
	}
	_putchar('\n');
}
