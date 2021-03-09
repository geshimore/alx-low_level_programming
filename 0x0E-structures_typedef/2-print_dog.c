#include "dog.h"
#include <stdio.h>

/**
* print_dog - a function to print struct dog
* @d: struct pointer
* Return: always 0
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("\n");
	}
	else if (d->name == NULL)
	{
		printf("Name: nil");
	}
	else
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age,
d->owner);
	}
}
