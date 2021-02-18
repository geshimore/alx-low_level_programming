#include "holberton.h"

/**
* *_strcat - a function to concatenate two strings.
* @dest: input
* @src: input
* Return: strind
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}
	for (j = 0; dest[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
