#include "main.h"

/**
 * set_bit - function that sets the value of a bit
 * to 1 at a given index.
 * @n: points to number.
 * @index: the index, starting from 0 of the bit to set.
 * Return: 1 if it worked, or -1 if an error occured.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	if (index >= (sizeof(*n) * 8))
	{
		return (-1);
	}
	a = 1;
	*n = *n | (a << index);
	return (1);
}
