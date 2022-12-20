#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string provided.
 */
void puts2(char *str)
{
	for (; *str != '\0'; str++)
	{
		while (*str % 2 != 0)
		{
			str++;
			continue;
		}
		_putchar(*str);
	}
	_putchar('\n');
}
