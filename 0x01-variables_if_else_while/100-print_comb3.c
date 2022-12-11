#include <stdio.h>
/**
 * main - Entry point
 *
 * Printing all possible combinations of two digit numbers with putchar()
 * using 5 max putchar() functions
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;

	for (d = 0; d <= 89; d++)
	{
		putchar((d/10) + '0');
		putchar((d%10) + '0');
		if (d < 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
