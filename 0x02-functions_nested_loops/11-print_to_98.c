#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - a function to print natural numbers n <= 98
 * @n: input
 * Return: natural numbers between n <= 98
*/

void print_to_98(int n)
{
	if (n < 98)
	{

		while (n <= 98)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(", ");

			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");

			}
			n--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");

}
