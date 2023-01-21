#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - program that adds two integers
 * @a: first int
 * @b: second int
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - program that finds the difference of two integers
 * @a: first int
 * @b: second int
 * Return: difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - program that multiplies two integers
 * @a: first int
 * @b: second int
 * Return: product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - program that divides two integers
 * @a: first int
 * @b: second int
 * Return: division of a on b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - program that finds modulo of two integers
 * @a: first int
 * @b: second int
 * Return: modulo of a on b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
