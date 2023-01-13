#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function  that allocates memory for an array, using malloc.
 * The _calloc function allocates memory for an array of nmemb elements
 * of size bytes each and returns a pointer to the allocated memory.
 * The memory is set to zero.
 * If nmemb or size is 0, then _calloc returns NULL.
 * @nmemb: number of elements of string.
 * @size: bytes of memory allocated.
 * Return: pointer to the allocated memory (Success), otherwise NULL (Fail).
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(nmemb * size);
	if (c == NULL)
		return (NULL);
	for (a = 0; a < (nmemb * size); a++)
		c[a] = 0;
	return (c);
}
