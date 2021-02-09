#include "holberton.h"

/**
 * print_sign - a function to print sign of an integer.
 * @n: input
 * Return: 1 if n>0, 0 if n==0, -1 if n<0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}

	else
	{
		_putchar ('-');
		return (-1);
	}
}
