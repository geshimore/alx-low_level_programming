#include "holberton.h"

/**
* _isupper - a function to check uppercase character.
* @c: input
* Return: always 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
