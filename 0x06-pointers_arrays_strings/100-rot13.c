#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @str: string to encode.
 * Return: encoded string.
 */
char *rot13(char *str)
{
	char org[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int i = 0;
	int a;

	while (*(str + i) != '\0')
	{
		for (a = 0; a <= 51; a++)
		{
			if (*(str + i) == org[a])
			{
				*(str + i) = rot[a];
				break;
			}
		}
		i++;
	}
	return (str);
}
