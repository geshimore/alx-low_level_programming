#include "holberton.h"
/**
 * rot13 - a function that encodes a string using rot13.
 * @n: input
 *
 * Return: encoded string rot13
 */

char *rot13(char *n)
{

	int x, rot = 13, i = 0;

	char swap[] = {'A', 'N', 'a', 'n', 'B', 'O', 'b', 'o', 'C', 'P',

		       'c', 'p', 'D', 'Q', 'd', 'q', 'E', 'R', 'e', 'r', 'F', 'S', 'f',

		       's', 'G', 'T', 'g', 't', 'H', 'U', 'h', 'u', 'I', 'V', 'i', 'v',

		       'J', 'W', 'j', 'w', 'K', 'X', 'k', 'x', 'L', 'Y', 'l', 'y', 'M',

		       'Z', 'm', 'z'};

	while (n[i] != '\0')
	{
		for (x = 0; x <= 51; x++)
		{
			if (n[i] == swap[x])

			{
				n[i] = n[i] + rot;
				x = 51;
			}
			rot = rot * -1;
		}
		i++;
	}
	return (n);
}
