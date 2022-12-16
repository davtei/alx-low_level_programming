#include "main.h"
/**
 * print_most_numbers - function that prints from 0 to 9, excluding 2 and 4,
 * followed by a new line.
 * Return: Always 0
 */
void print_most_numbers(void)
{
	char m = 0;

	while (m <= 9)
	{
		if ((m != 2) && (m != 4))
			{
				_putchar(m + '0');
			}
		m++;
	}
	_putchar('\n');
}
