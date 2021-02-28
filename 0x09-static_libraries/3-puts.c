#include "holberton.h"

/**
* _puts - a function to print string
* @s: input
* Return: always 0
*/
void _puts(char *s)
{
	int  i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
