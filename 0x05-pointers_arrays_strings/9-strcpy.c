#include "holberton.h"

/**
* *_strcpy - a function to copy a string pointed by src and paste
* to 'dest'.
* @dest: input
* @src: input
* Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
