#include "holberton.h"

/**
* print_most_numbers - a function to print 0 - 9 excluding 2 and 4
* Return: always 0
*/

void print_most_numbers(void)
{
	int k;

	for (k = '0'; k <= '9'; k++)
	{
		if (k == '2' || k == '4')
		{
			continue;
		}
		_putchar(k);
	}
	_putchar('\n');
}
