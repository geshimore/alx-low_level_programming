#include "holberton.h"
/**
 * rot13 - a function that encodes a string using rot13.
 * @s: input
 * Return: encoded string rot13
 */

char *rot13(char *s)

{

	int i;

	char str1[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";

	char str2[] = "nopqrstuvwxyzabcdefghijklm";


	for (i = 0; s[i] != '\0'; i++)

	{

		if ((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123))

		{

			s[i] = (s[i] - 65 > 25) ?

				str2[s[i] - 97] : str1[s[i] - 65];

		}

	}

	return (s);

}
