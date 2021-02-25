#include "holberton.h"

/**
 * _sqrt_recursion - checks for perfect square
 * @n: input
 * Return: Always 0
 */

int _sqrt_recursion(int n)
{
	int square = 2;

	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	return (squareroot(n, square));
}

/**
 * squareroot - checks if perfect square
 * @n: input
 * @i: counter
 * Return: square root
 */

int squareroot(int n, int i)

{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (squareroot(n, i + 1));
}
