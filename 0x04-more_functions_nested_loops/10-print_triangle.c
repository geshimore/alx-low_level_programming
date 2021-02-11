#include "holberton.h"

/**
* print_triangle - a function that prints triangle using #
* @size: input
* Return: triangle followed by new line
*/

void print_triangle(int size)
{
	int s, r, tr;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 0; r <= (size - 1); r++)
		{
			for (s = 0; s < (size - 1) - r; s++)
			{
				_putchar(' ');
			}
			for (tr = 0; tr <= r; tr++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
