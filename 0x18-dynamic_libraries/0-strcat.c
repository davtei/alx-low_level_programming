#include "main.h"

/**
 * _strcat - function that appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte.
 * @dest: destination string
 * @src: source string
 * Return: a pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int len1 = 0, len2 = 0, i = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}
	while (src[len2] != '\0')
	{
		len2++;
	}
	while (i <= len2)
	{
		dest[len1 + i] = src[i];
		i++;
	}
	return (dest);
}
