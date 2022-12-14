#include "main.h"
/**
 * print_last_digit - function that prints last digit of a number.
 *
 * @d: number supplied.
 *
 * Return: Always 0
 */
int print_last_digit(int d)
{
	int pld;

	pld = d % 10;
	if (d < 0)
	{
		return (d *= -1);
	}
	_putchar(pld + '0');
	return (pld);
}
