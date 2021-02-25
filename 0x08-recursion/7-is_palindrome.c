#include "holberton.h"

/**
 * is_palindrome - a function that returns 1 if a string is a palindrome
 * and 0 if not.
 * @s: input
 * Return: always 0
 */

int is_palindrome(char *s)

{
	int l = lengthc(s) - 1;

	return (palindrome(s, 0, l));
}

/**
 * lengthc - finds the length count
 * @s: input
 * Return: length size
 */

int lengthc(char *s)

{
	if (!*s)
		return (0);
	return (1 + lengthc(++s));
}

/**
 * palindrome - checks if start == end of string.
 * @str: input
 * @s: input
 * @e: end of string
 * Return: if str is a palindrome
 */

int palindrome(char str[], int s, int e)

{
	if (s == e)
		return (1);
	if (str[s] != str[e])
		return (0);
	if (s < e + 1)
		return (palindrome(str, s + 1, e - 1));
	return (1);
}
