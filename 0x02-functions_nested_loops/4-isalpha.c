#include "main.h"
/**
 * _isalpha - function to check for alphabetic character.
 *
 * @c: input to be checked.
 *
 * Return: 1 for alphabet else 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
