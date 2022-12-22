#include "main.h"

/**
 * _strncpy - function that copies n bytes of a src string to a
 * dest string,
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src string
 * Return: a pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		i++;
		dest[i] = src[i];
	}
	while (i < n)
	{
		i++;
		dest[i] = '\0';
	}
	return (dest);
}
