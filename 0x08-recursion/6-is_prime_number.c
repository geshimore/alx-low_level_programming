#include "holberton.h"

/**
 * is_prime_number - a function that returns 1 if the input integer is a prime
 * number, otherwise return 0.
 * @n: input
 * Return: Always 0
 */

int is_prime_number(int n)

{

	if (n <= 1)

		return (0);

	else if (prime_checker(n, n / 2) > 0)

		return (1);

	return (0);

}

/**
 * prime_checker - checks for prime
 * @n: input
 * @i: input
 * Return: prime check
 */

int prime_checker(int n, int i)

{

	if (i == 1)

		return (1);

	if (n % i == 0)

		return (0);

	else

		return (prime_checker(n, i - 1));

}
