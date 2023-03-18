#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * largest_num - function that finds the largest number
 * @uname: username
 * @len: length of username
 * Return: largest number
 */
int largest_num(char *uname, int len)
{
	int xter, xters;
	unsigned int rand_num;

	xter = *uname;
	xters = 0;

	while (xters < len)
	{
		if (xter < uname[xters])
			xter = uname[xters];
		xters += 1;
	}
	srand(xter ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * mulx - function that multiplies each character of username
 * @uname: username
 * @len: length of username
 * Return: product of character
 */
int mulx(char *uname, int len)
{
	int xter, xters;

	xter = xters = 0;

	while (xters < len)
	{
		xter = xter + uname[xters] * uname[xters];
		xters += 1;
	}
	return (((unsigned int)xter ^ 239) & 63);
}

/**
 * rand_xter - function that generates a random character
 * @uname: username
 * Return: random character
 */
int rand_xter(char *uname)
{
	int xter, xters;

	xter = xters = 0;

	while (xters < *uname)
	{
		xter = rand();
		xters += 1;
	}
	return (((unsigned int)xter ^ 220) & 63);
}

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: vector of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int len, xter, xters;
	long alpha[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (len = 0; argv[1][len]; len++)
		;
	/* func_1 */
	keygen[0] = ((char *)alpha)[(len ^ 59) & 63];
	/* func_2 */
	xter = xters = 0;
	while (xters < len)
	{
		xter = xter + argv[1][xters];
		xters += 1;
	}
	keygen[1] = ((char *)alpha)[(xter ^ 79) & 63];
	/* func_3 */
	xter = 1;
	xters = 0;
	while (xters < len)
	{
		xter = argv[1][xters] * xter;
		xters = xters + 1;
	}
	keygen[2] = ((char *)alpha)[(xter ^ 85) & 63];
	/* largest_num */
	keygen[3] = ((char *)alpha)[largest_num(argv[1], len)];
	/* mulx */
	keygen[4] = ((char *)alpha)[mulx(argv[1], len)];
	/* rand_xter */
	keygen[5] = ((char *)alpha)[rand_xter(argv[1])];
	keygen[6] = '\0';
	for (xter = 0; keygen[xter]; xter++)
		printf("%c", keygen[xter]);
	return (0);
}
