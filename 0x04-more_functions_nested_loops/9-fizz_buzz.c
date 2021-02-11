#include <stdio.h>
#include <stdlib.h>

/**
* main - a function that prints 1 to 100.
* multiples of 3 are replaced by Fizz, 5 by Buzz, 3 and 5 by FizzBuzz
* Return: always 0
*/

int main(void)
{
	int k;

	char f[] = "Fizz";

	char b[] = "Buzz";

	char fb[] = "FizzBuzz";

	for (k = 1; k <= 100; k++)
	{
		if (k == 100)
			printf("%s", b);
		else if ((k % 3 == 0) && (k % 5 == 0))
			printf("%s ", fb);
		else if (k % 3 == 0)
			printf("%s ", f);
		else if (k % 5 == 0)
			printf("%s ", b);
		else
			printf("%d ", k);
	}
	printf("\n");

	return (0);

}
