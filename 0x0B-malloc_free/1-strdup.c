#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * It returns a pointer to a new string which is a duplicate of the string str.
 * Memory for the string is obtained with malloc, and can be freed with free.
 * @str: string.
 * Return: pointer to the duplicate string (Success),
 * otherwise NULL if str = NULL, or if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		;
	p = (char *)malloc(sizeof(char) * (i + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		p[j] = str[j];
	}
	return (p);
}
