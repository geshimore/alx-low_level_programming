#include "holberton.h"

/**
* print_numbers - a function to print numbers from 0 - 9
* Return: always 0
*/

void print_numbers(void)
{
	int k;

	for (k = '0'; k <= '9'; k++)
	{
		_putchar (k);
}
	_putchar('\n');
}
