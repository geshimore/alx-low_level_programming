#include "holberton.h"

/**
* *_strncpy - a function to copy a string.
* @dest: input
* @src: input
* @n: input
* Return: copies a string from source to destination
*/

char *_strncpy(char *dest, char *src, int n)

{

	int i;


	for (i = 0; src[i] != '\0'; i++)

		if (i < n)

			dest[i] = src[i];

	while (i < n)

		dest[i++] = '\0';

	return (dest);

}
