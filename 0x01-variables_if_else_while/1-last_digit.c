#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)

{

	int n, lastDigit;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;
	if (lastDigit > 5)
	{
		printf("%s%d%s%d%s", "Last digit of", n, " is ", lastDigit,
" and is greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf("%s%d%s%d%s", "Last digit of", n, " is ", lastDigit,
" and is 0\n");
	}
	else if (lastDigit < 6)
	{
		printf("%s%d%s%d%s", "Last digit of", n, " is ", lastDigit,
" and is less than 6 and not 0\n");
	}

	return (0);

}

