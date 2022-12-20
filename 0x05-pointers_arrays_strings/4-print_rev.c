#include "main.h"

/**
 * print_rev - function to print a string in reverse,
 * followed by a new line.
 *
 * @s: string to print.
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	for (a -= 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
