#include "holberton.h"

/**
 * _abs - a function that returns an absolute value of an integer
 * @n: input
 * Return: absolute value
*/

int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
		return (n);
	}

	else
	{
		return (n);
	}
}
