#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * The returned pointer points to a newly allocated space in memory,
 * containing the contents of s1, followed by the contents of s2, and
 * null terminated.
 * @s1: first string.
 * @s2: second string.
 * Return: pointer to new allocated space containing resulting string
 * (Success), otherwise NULL (Failure).
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j, slen, ccat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	p = malloc(sizeof(char) * (i + j + 1));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (ccat = 0; ccat < i; ccat++)
		p[ccat] = s1[ccat];
	slen = j;
	for (j = 0; j <= slen; ccat++, j++)
		p[ccat] = s2[j];
	return (p);
}
