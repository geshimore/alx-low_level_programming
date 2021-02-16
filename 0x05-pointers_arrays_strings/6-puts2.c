#include "holberton.h"

/**
* puts2 - a function to print other character of a string
* @str: input
* Return: character of a string
*/

void puts2(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
	{
		if (k % 2 == 0)
			_putchar(str[k]);
		else
			continue;
	}
	_putchar('\n');
}
