#include <stdio.h>

/**
* main - entry point
* @argc: argument counter
* @argv: arguments passed
* Return: always 0
*/

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
