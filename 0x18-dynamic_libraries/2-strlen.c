#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: string provided.
 * Return: length of string.
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
