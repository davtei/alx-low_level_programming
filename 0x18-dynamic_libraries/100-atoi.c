#include "main.h"

/**
 * _atoi - function that converts a string to an integer.
 * @s: string provided.
 * Return: an integer
 */
int _atoi(char *s)
{
	unsigned int intg = 0;
	int sign = 1;

	do {
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			intg = (intg * 10) + (*s - '0');
		}
		else if (intg > 0)
		{
			break;
		}
	} while (*s++);
	return (intg * sign);
}
