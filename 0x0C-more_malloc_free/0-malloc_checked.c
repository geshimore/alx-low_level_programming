#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b : input
 * Return: Returns a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *k;

	k = malloc(b);

	if (k == NULL)
	{
		exit(98);
	}
	return (k);
}
