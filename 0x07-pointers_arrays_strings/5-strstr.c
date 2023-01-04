#include "main.h"

/**
 * _strstr - function that locates a substring.
 * _strstr() function finds the first occurrence of the substring needle
 * in the string haystack. The terminating null bytes (\0) are not compared
 * @haystack: string to be searched
 * @needle: substring to search
 * Return: pointer to beginning of located substring, or NULL if the
 * substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int a;

	while (*haystack != '\0')
	{
		a = 0;

		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
		{
			haystack++;
			needle++;
			a++;
		}
		if (*needle == '\0')
		{
			return (haystack - a);
		}
		haystack -= (a - 1), needle -= a;
	}
	return ('\0');
}
