#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: string to duplicate
 * Return: a pointer to the duplicated string, NULL if str = NULL
 */

char *_strdup(char *str)

{

	char *k;

	int i, j;


	if (str == NULL)

		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	k = malloc(i * sizeof(*k) + 1);

	if (k == NULL)

		return (NULL);

	for (j = 0; j < i; j++)

		k[j] = str[j];

	k[j] = '\0';

	return (k);

}
