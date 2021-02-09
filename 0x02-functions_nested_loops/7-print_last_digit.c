#include "holberton.h"

/**
 * print_last_digit - a function that prints last digit of a number
 * @k: input
 * Return: last digit of a number
*/

int print_last_digit(int k)
{
	int lastDigit;

	lastDigit = k % 10;

	if (lastDigit < 0)
	{
		lastDigit = (-1 * lastDigit);
	}
	_putchar (lastDigit + '0');
	return (lastDigit);
}
