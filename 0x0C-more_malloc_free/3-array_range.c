#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers. 
 * The array created contains all the values from min (included) to
 * max (included), ordered from min to max.
 * If min > max, return NULL.
 * Return: the pointer to the newly created array (Success), otherwise NULL.
 */
int *array_range(int min, int max)
{
	int *a, i = 0, x = min;

	if (min > max)
		return (0);
	a = malloc((max - min + 1) * sizeof(int));

	if (!a)
		return (0);
	while (i <= max - min)
		a[i++
