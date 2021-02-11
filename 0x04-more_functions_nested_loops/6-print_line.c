#include "holberton.h"

/**
* print_line - a funtion that raws a straight line in the terminal
* @n: input
* Return: straigt line and a new line at the end
*/

void print_line(int n)
{
	int k;

	if (n <= 0)
	{
		_putchar('\n');

	}
	else
	{
		for (k = 1; k <= n; k++)
			_putchar('_');
	}

	_putchar('\n');
}
