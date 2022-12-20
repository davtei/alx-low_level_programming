#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string provided.
 */
void puts2(char *str)
{
	int sl = 0;
	int i;

	while (str[sl] != '\0')
	{
		sl++;
	}
	for (i = 0; i < sl; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
