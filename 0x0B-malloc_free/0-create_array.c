#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array.
 * @c: members of array.
 * Return: pointer to the array, otherwise NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size > 0)
	{
		p = malloc(sizeof(char) * size);
		if (p == NULL)
		{
			return (NULL);
		}
	}
	else
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
