#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates the array given but with funciton
 * @array: is the array
 * @size: the size of the array
 * @action: the pointer that points to the iterator
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;


	if (array == 0 || action == 0)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
