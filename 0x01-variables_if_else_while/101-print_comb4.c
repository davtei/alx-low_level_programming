#include <stdio.h>
/**
 * main -  Printing combinations of three digits with putchar() using 6 max putchar() functions.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int singl = '0';
	int doubl = '0';
	int tripl = '0';

	for (tripl = '0'; tripl <= '9'; tripl++)
	{
		for (doubl = '0'; doubl <= '9'; doubl++)
		{
			for (singl = '0'; singl <= '9'; singl++)
			{
				if (!((singl == doubl) || (doubl == tripl) || (doubl > singl) || (tripl > doubl)))
				{
					putchar(tripl);
					putchar(doubl);
					putchar(singl);
					if (!((singl == '9') && (doubl  == '8') && (tripl == '7')))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
