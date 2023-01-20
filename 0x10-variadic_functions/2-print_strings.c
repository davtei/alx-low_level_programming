#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * Prints a new line at the end of the function.
 * @separator: string to be printed between the string.
 * @n: number of strings passed to the function.
 * If separator is NULL, does not print it.
 * If one of the strings is NULL, prints (nil) instead.
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (i < (n - 1))
		{
			if (separator)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(strings);
}
