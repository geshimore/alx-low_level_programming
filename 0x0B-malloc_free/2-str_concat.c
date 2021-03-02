#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: input
 * @s2: input
 * Return: pointer to concat string
 */

char *str_concat(char *s1, char *s2)
{
	char *k;

	int i, j, c, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)

		;

	for (j = 0; s2[j] != '\0'; j++)

		;
	k = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);

	if (k == NULL)
		return (NULL);
	for (c = 0, d = 0; c < (i + j + 1); c++)
	{
		if (c < i)
			k[c] = s1[c];
		else
			k[c] = s2[d++];
	}
	return (k);
}
