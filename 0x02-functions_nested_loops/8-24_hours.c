#include "main.h"
/**
 * jack_bauer - Function to create a Jack Bauer timer,
 * from 00:00 to 23:59
 *
 * return: 0
 */
void jack_bauer(void)
{
	int hr;
	int min;

	if (hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
