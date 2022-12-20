#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: string to reverse.
 */
void rev_string(char *s)
{
	int a = 0;
	int strlnth;
	int holdr;

	strlnth = _strlen(s);
	for (a = 0; a < strlnth / 2; a++)
	{
		holdr = s[a];
		s[a] = s[strlnth - a - 1];
		s[strlnth - a - 1] = holdr;
	}
}
