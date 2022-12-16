#include <stdio.h>
/**
 * main - Fizz-Buzz test
 * Return: void
 */
int main(void)
{
	int f = 1;

	while (f <= 100)
	{
		if (f % 3 == 0 && f % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (f % 3 == 0)
		{
			printf("Fizz");
		}
		else if (f % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", f);
		}

		if (f != 100)
		{
			putchar(' ');
		}
		f++
	}
	putchar('\n');
	return (0);
}
