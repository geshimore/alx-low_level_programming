#include "holberton.h"

/**
 * print_alphabet - print alphabets in lower case.
 *
 * return: always 0
*/

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}

	_putchar('\n');
}
