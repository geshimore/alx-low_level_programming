#include "holberton.h"

/**
* print_square - a function that prints a square.
* @size: input
* Return: square and a new line
*/

void print_square(int size)
{
	int k, l;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 1; k <= size; k++)
		{
			_putchar('#');

			for (l = 2; l <= size; l++)
			{
				_putchar('#');

			}
			_putchar('\n');

		}
	}
}
