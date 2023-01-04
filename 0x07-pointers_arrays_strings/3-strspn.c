#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string to search substring from
 * @accept: accepted bytes
 * Return: number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, a;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		a = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				a = 0;
				break;
			}
		}
		if (a == 1)
		{
			break;
		}
	}
	return (i);
}
