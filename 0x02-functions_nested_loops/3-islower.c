#include "holberton.h"

/**
 * _islower - a function to check lower and upper characters.
 * @c: input
 * Return: 1 if lower, 0 if upper characters.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
