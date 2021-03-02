#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars, and initializes it
 * with a specific char.
 * @size: size of array
 * @c: specific char
 * Return: a pointer to the array, or NULL if error
 */

char *create_array(unsigned int size, char c)

{

	char *k;

	unsigned int i;


	if (size == 0)

		return (NULL);

	k = malloc(size * sizeof(*k));

	if (k == NULL)

		return (NULL);


	for (i = 0; i < size; i++)

		k[i] = c;

	return (k);

}
