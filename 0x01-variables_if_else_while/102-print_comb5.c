#include <stdio.h>
/**
 * main - Entry point
 *
 * Printing all possible combinations of two digit numbers with putchar()
 * using 8 max putchar() functions.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int singl;
	int doubl;

	for (doubl = 0; doubl <= 99; doubl++)
	{
		for (singl = 0; singl <= 99; singl++)
		{
			if (doubl < singl)
			{
				putchar((doubl / 10) + 48);
				putchar((doubl % 10) + 48);
				putchar(' ');
				putchar((singl / 10) + 48);
				putchar((singl % 10) + 48);
				if (doubl != 98 || singl != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
