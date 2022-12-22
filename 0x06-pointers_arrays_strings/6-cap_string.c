#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @str: string provided
 *
 * Return: Capitalized string
 */
char *cap_string(char *str)
{
	int i, a = 0;
	int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(str + a) >= 97 && *(str + a) <= 122)
	{
		*(str + a) = *(str + a) - 32;
	}
	a++;
	while (*(str + a) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(str + a) == sep[i])
			{
				if ((*(str + (a + 1)) >= 97) && (*(str + (a + 1)) <= 122))
				{
					*(str + (a + 1)) = *(str + (a + 1)) - 32;
				}
				break;
			}
		}
		a++;
	}
	return (str);
}
