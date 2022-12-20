#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @src: source string
 * @dest: destination string
 * Return: pointer to destination string.
 */
char *_strcpy(char *dest, char *src)
{
	int copy = 0;

	while (copy >= 0)
	{
		*(dest + copy) = *(src + copy);
		if (*(src + copy) == '\0')
		{
			break;
		}
		copy++;
	}
	return (dest);
}
