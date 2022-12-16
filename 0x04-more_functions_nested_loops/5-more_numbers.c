#include "main.h"
/**
 * more_numbers - function that prints 0 to 14 for 10 times,
 * followed by a new line.
 * Return: Always 0
 */
void more_numbers(void)
{
	int m = 0;
	char n, o;

	while (m <= 10)
	{
		for (n = 0; n <= 14; n++)
		{
			o = n;
			if (n > 0)
			{
				_putchar('1');
				o = n % 10;
			}
			_putchar('0' + o);
		}
		_putchar('\n');
		m++;
	}
}
