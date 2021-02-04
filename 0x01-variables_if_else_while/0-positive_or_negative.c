#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - entry point.
 * Return: always 0
 * Description: pick random number and check if its negative or positive.
*/

int main(void)
{

	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d%s", n, " is positive\n");
	}
	else if (n < 0)
	{
		printf("%d%s", n, " is negative\n");
	}
	else
	{
		printf("%d%s", n, " is zero\n");
	}

	return (0);

}

