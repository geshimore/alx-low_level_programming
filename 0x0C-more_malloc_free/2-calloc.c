#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 *@nmemb: size of the array
 *@size: size of the type
 * Return: If nmemb or size is 0, then _calloc returns NULL, If malloc fails,
 * then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array = NULL;
	unsigned int i;
	unsigned int a;
	char *k;

	if (size == 0 || nmemb == 0)
		return (NULL);

	a = nmemb * size;

	array = malloc(a);

	k = (char *)array;

	if (k != NULL)
	{
		for (i = 0; i < a; i++)
			k[i] = 0;
		return (k);
	}
	return (NULL);

}
