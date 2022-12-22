#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @str: string to encode.
 * Return: pointer to encoded string.
 */
char *leet(char *str)
{
	char s1[] = "aeotlAEOTL";
	char s2[] = "4307143071";
	int i = 0, j;

	while (*(str + i) != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (*(str + i) == s1[j])
			{
				*(str + i) = s2[j];
			}
		}
		i++;
	}
	return (str);
}
