#include "holberton.h"

/**
* swap_int - afunction that swaps values of two integers
* @a: input
* @b: input
* Return: swaped values
*/

void swap_int(int *a, int *b)
{
	int k, l;

	k = *a;
	l = *b;

	*a = l;
	*b = k;
}
