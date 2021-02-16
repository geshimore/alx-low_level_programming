#include "holberton.h"

/**
* _strlen - a function thatr returns the length of a string
* @s: input
* Return: the length of a string
*/

int _strlen(char *s)
{
	int k = 0;

	while (s[k] != '\0')
		k++;

	return (k);
}
