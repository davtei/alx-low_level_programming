#include "main.h"

/**
 * str_len - function that calculates the length of a string
 * @s: string
 * Return: length of a string
 */
int str_len(char *s)
{
	int len = 0;

	if (*(s + len))
		len++;
	len += str_len(s + len);
	return (len);
}
/**
 * chck_pal - function that checks if a string is a palindrome.
 * @s: string
 * @len: length of string s
 * @i: iterator or index of string to be checked.
 * Return: 1 if s is a palindrome, otherwise 0.
 */
int chck_pal(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);
	if (s[i] == s[len - i - 1])
		return (chck_pal(s, len, i + 1));
	return (0);
}
/**
 * is_palindrome - function that checks if a string is a palindrome.
 * @s: string
 * Return: 1 if s is a palindrome, otherwise 0.
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len = str_len(s);

	if (!(*s))
		return (1);
	return (chck_pal(s, len, i));
}
