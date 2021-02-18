#include "holberton.h"
/**
 * cap_string - a function that capitalizes all words of a string
 * @n: input
 *
 * Return: capitalized string
 */

char *cap_string(char *n)
{

	int i, k;
	int c = 32;
	int sep[] = {',', ';', '.', '?', '"',

		     '(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{

			n[i] = n[i] - c;

		}

		c = 0;

		for (k = 0; k <= 12; k++)
		{
			if (n[i] == sep[k])
			{
				k = 12;
				c = 32;
			}

}

	}

	return (n);

}
