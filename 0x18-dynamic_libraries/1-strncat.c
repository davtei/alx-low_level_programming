#include "main.h"

/**
 * _strncat - function that appends n bytes of the src string to the
 * dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src string
 * Return: a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0, i = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[len1 + i] = src[i];
		i++;
	}
	return (dest);
}
