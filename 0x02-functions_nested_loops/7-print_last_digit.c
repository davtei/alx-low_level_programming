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
	int lastd = (d % 10);

	if (lastd < 0)
	{
		lastd *= -1;
	}
	_putchar(lastd + '0');	
	return (0);
}
