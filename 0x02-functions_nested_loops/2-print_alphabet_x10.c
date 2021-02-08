#include "holberton.h"

/**
 * print_alphabet_x10 - a program that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */

void print_alphabet_x10(void)
{

	int k, l;

	l = 0;

	while (l < 10)
	{

		for (k = 'a'; k <= 'z'; k++)
		{

			_putchar(k);
		}

		l++;

		_putchar('\n');
	}
}
