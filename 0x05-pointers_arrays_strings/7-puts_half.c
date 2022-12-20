#include "main.h"

/**
 * puts_half - function that prints half of a string,
 * followed by a new line.
 * @str: string provided.
 */
void puts_half(char *str)
{
	int sl = 0;
	int a, b;

	while (str[sl] != '\0')
	{
		sl++;
	}
	if (sl % 2 == 0)
		for (a = sl / 2; str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
	else
	{
		for (b = (sl - 1) / 2; b < sl - 1; b++)
		{
			_putchar(str[b + 1]);
		}
	}
	_putchar('\n');
}
