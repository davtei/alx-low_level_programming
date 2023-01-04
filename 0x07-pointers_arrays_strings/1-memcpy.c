#include "main.h"

/**
 * _memcpy - function that copies n bytes from memory area
 * of src to memory area of dest.
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: bytes to copy
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
