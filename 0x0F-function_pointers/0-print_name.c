#include "function_pointers.h"

/**
* print_name - Print a name from a function pointer
* @name: char string
* @f: function pointer that takes a string argument
* Return: always 0
*/

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	f(name);

}
