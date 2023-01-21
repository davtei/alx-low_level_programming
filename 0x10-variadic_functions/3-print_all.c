#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything.
 * @format: list of arguments passed to the function;
 * (c: char, i: int, f: float, s: char * (If string is NULL, print (nill);
 * any other char is ignored).
 * Max. of 2 while loops, 2 if statements and 9 variables.
 * Prints new line at the end of the function.
 * Return: args (Success), otherwise nil.
 */
void print_all(const char * const format, ...)
{
	va_list print;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(print, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(print, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(print, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(print, double)), c = 1;
				break;
			case 's':
				str = va_arg(print, char *), c = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} i++;
	}
	printf("\n"), va_end(print);
}