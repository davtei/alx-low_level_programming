#include <stdio.h>
/**
 * main - Entry point
 *
 * printing alphabets from a to z, skipping q & e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char z;

	for (z = 'a'; z <= 'z'; z++)
	{
		if (z != 'q' && z != 'e')
			putchar(z);
	}
	putchar('\n');
	return (0);
}
