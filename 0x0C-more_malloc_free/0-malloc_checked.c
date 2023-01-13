#include "main.h"

/**
 * *malloc_checked - function that allocates memory using malloc.
 * If malloc fails, the malloc_checked function causes normal process
 * termination with a status value of 98
 * @b: amount of memory.
 * Return: pointer to the allocated memory (Success), otherwise 98.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
