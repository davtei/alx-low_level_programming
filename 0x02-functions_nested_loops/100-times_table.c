#include "main.h"
/**
 * print_times_table - function to create a time table
 * for numbers > 0 and < 15.
 * @n: number to print
 *
 * result: 0
 */
void print_times_table(int n)
{
	int x, y, z;

	if ((n >= 0) && (n <= 15))
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = x * y;
				if (y == 0)
				{
					_putchar(z + '0');
				}
				else if (z < 10 && y != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(z + '0');
				}
				else if (z >= 10 && z < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((z / 10) + '0');
					_putchar((z % 10) + '0');
				}
				else if (z >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((z / 100) + '0');
					_putchar(((z / 10) % 10) + '0');
					_putchar((z % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}