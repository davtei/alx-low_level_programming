#include "main.h"
/**
* print_last_digit - Function to print last digit of inputs.
*
* @d: number supplied.
*
* Return: last digit of a number.
*/
int print_last_digit(int d)
{
	int lastdigit;

	lastdigit = n % 10;
	if (n < 0)
		lastdigit *= -1;
	_putchar(lastdigit + '0');
	return (lastdigit);
}
