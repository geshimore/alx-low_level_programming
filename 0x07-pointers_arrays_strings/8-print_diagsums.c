#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: input
 * @size: input
 * Return: Always 0
 */

void print_diagsums(int *a, int size)

{

	int i, k, total1 = 0, total2 = 0;


	for (i = 0; i <= (size * size); i = i + size + 1)

		total1 = total1 + a[i];


	for (k = size - 1; k <= (size * size) - size; k = k + size - 1)

		total2 = total2 + a[k];

	printf("%d, %d\n", total1, total2);

}
