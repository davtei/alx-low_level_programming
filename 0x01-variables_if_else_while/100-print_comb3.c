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
	int singl = '0';
	int doubl = '0';

	for (doubl = '0'; doubl <= '9'; doubl++)
	{
		for (singl = '0'; singl <= '9'; singl++)
		{
			if (!((singl == doubl) || (singl < doubl)))
			{
				putchar(doubl);
				putchar(singl);
				if (!((singl == '9') && (doubl == '8')))
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
