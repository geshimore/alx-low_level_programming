#include "holberton.h"

/**
* print_diagonal - a function to print diagonal line.
* @n: input
* Return: diagonal line and a new line
*/

void print_diagonal(int n)
{
	int k, l;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 1; k <= n; k++)
		{
			for (l = 1; l < k; l++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
