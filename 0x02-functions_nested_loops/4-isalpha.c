#include "holberton.h"

/**
* _isalpha - a function to check alphabetic character.
* @c: character
* Return: 1 if lowercase/uppercase, 0 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
