#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 *@s1: string 1
 *@s2: string 2
 *@n: number of bytes
 * Return: NULL if fail, else pointer to malloc memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strnew = NULL;
	unsigned int i, n1, n2, j, count, p;

	count = 0;
	p = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (n1 = 0; s1[n1] != '\0'; n1++)
		;
	for (n2 = 0; s2[n2] != '\0'; n2++)
		;
	if (n >= n2)
	{
		p = n2;
	} else
	{
		for (n2 = 0; n2 < n; n2++)
			p++;
	}
	strnew = (char *)malloc((n1 + n2 + 1) * sizeof(char));
	if (strnew == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		strnew[i] = s1[i];
	for (j = 0; j < p; i++)
	{
		strnew[i] = s2[count];
		count++;
		j++;
	}
	strnew[i] = '\0';
	return (strnew);
}
