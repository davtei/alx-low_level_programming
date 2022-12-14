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
	if (d < 0)
	{
		return (d *= -1);
	}
	else
	{
		return (d);
	}
}
