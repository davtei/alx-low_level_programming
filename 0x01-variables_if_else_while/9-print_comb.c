#include <stdio.h>
/**
 * main - Entry point
 *
 * Printing all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s;

	for (s = 0; s <= 9; s++)
	{
		putchar(s + '0');
		if (s < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
