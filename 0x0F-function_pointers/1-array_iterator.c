#include "function_pointers.h"

/**
* array_iterator - execute a function pointer on each element of an array
* @array: array of integers
* @size: size of array
* @action: function pointer
* Return: always 0
*/

void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int i;

	if (action != NULL && array != NULL)

	{

		for (i = 0; i < size; i++)

			action(array[i]);

	}
}
