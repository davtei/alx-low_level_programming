#include <stdio.h>

/**
 * b4main - function that prints a given string before the main function
 * is executed.
 */
void __attribute__((constructor)) b4main(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
