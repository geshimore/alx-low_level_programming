#include "holberton.h"
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: input
 * @n: input
 *
 * Return: always 0
 */

void reverse_array(int *a, int n)

{

	int i, t;


	for (i = 0; i < n; i++)

	{

		n--;

		t = a[i];

		a[i] = a[n];

		a[n] = t;

	}

}
