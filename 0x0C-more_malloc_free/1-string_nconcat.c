#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * The returned pointer point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated.
 * If n is greater or equal to the length of s2 then the entire string s2 is
 * used.
 * @s1: first string.
 * @s2: second string.
 * @n: bytes of s2.
 * if NULL is passed, it is treated as an empty string.
 * Return: pointer to newly allocated space (Success), otherwise NULL (Fail).
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1 = 0, len2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n > len2)
	n = len2;
	p = malloc((len1 + n + 1) * sizeof(char));
	if (p == NULL)
		return (0);
	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}
	for (; i < (len1 + n); i++)
	{
		p[i] = s2[i - len1];
	}
	p[i] = '\0';
	return (p);
}
