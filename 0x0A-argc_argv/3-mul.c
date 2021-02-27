#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * @argc: argument counter
 * @argv: arguments passed
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i, mult;

	mult = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mult = mult * atoi(argv[i]);
		}
			printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
