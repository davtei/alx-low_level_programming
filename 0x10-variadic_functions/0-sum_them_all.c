#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of parameters passed to the function.
 * @...: variable number of parameters to find the sum of.
 * Return: sum of parameters (Success), otherwise 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	va_end(args);
	return (sum);
}
