#include <stdio.h>
/**
 * main - Entry point
 *
 * printing numbers 0 to 9 with putchar()
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
