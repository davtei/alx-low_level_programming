#include "main.h"
#include <stdlib.h>

/**
 * argstostr - fuction that concatenates all the arguments
 * of a program.
 * Each argument is followed by \n in the new string.
 * @ac: number of arguments.
 * @av: string of argumaents.
 * Return: pointer to new string (Success), otherwise NULL if ac == 0
 * or av == NULL.
 */
char *argstostr(int ac, char **av)
{
	int i, j, c, cp;
	char *acc;

	if (ac == 0)
		return (NULL);
	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}
	acc = malloc((c + 1) * sizeof(char));
	if (acc == NULL)
	{
		free(acc);
		return (NULL);
	}
	for (i = j = cp = 0; cp < c; j++, cp++)
	{
		if (av[i][j] == '\0')
		{
			acc[cp] = '\n';
			i++;
			cp++;
			j = 0;
		}
		if (cp < (c - 1))
			acc[cp] = av[i][j];
	}
	acc[cp] = '\0';
	return (acc);
}
