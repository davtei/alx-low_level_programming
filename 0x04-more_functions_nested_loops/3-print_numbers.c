#include "main.h"
/**
 * print_numbers - function that prints the numbers,
 * from 0 to 9, followed by a new line.
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	char a = 0;

	while (a <= 9)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
