#include "main.h"

/**
 * _strlen_recursion - function that calculates the length of a string
 * @s: string
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
/**
 * chck_pal - function that checks if a string is a palindrome.
 * @s: string
 * @i: iterator or index of string to the left of median.
 * @j: iterator or index of string to the right of median.
 * Return: 1 if s is a palindrome, otherwise 0.
 */
int chck_pal(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (chck_pal(s, i + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - function that checks if a string is a palindrome.
 * @s: string
 * Return: 1 if s is a palindrome, otherwise 0.
 */
int is_palindrome(char *s)
{
	return (chck_pal(s, 0, _strlen_recursion(s) - 1));
}
