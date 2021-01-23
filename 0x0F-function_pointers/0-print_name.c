#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints the name from another functions pointer
 * @name: the name to be taken and printed
 * @f: is the function pointer that points to the greeting part of the text
 * Retrun: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == 0 || name == 0)
	{
		return;
	}
	(*f)(name);
}
