#include "search_algos.h"

/**
 * print_arr - helper func to print array everytime array is halved
 * @array: array
 * @l: left index of original array
 * @r: right index of original array
 */

void print_arr(int *array, int l, int r)
{
	int i = 0;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		if (i != r)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}
/**
 * binary_search - search mids
 * @array: given array of ints
 * @size: size of array
 * @value: value to search for
 * Return: index at which value's found
 */

int binary_search(int *array, size_t size, int value)
{
	int l, r, mid;

	l = 0;
	r = size - 1;

	if (!array)
		return (-1);

	while (l <= r)
	{
		print_arr(array, l, r);

		mid = (l + r) / 2;

		if (value == array[mid])
		{
			return (mid);
		}
		else if (value < array[mid])
		{
			r = mid - 1;
		}
		else
		{
			l = mid + 1;
		}
	}
	return (-1);
}
