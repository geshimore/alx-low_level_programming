#include "holberton.h"

/**
* *_strncat - a function that concatenate two strings
* @dest: input
* @src: input
* @n: input
* Return: string of n bytes
*/


char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}
	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
		if (src[j] == '\0')
			j = n;
	}
	return (dest);
}
