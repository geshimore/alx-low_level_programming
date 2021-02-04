#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int i;
	char k;


	for (i = '0'; i <= '9'; i++)

		putchar(i);

	for (k = 'a'; k <= 'f'; k++)

		putchar(k);

	putchar('\n');

	return (0);

}

