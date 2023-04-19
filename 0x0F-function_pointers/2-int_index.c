#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - finds the index of the array that fulfil the condition of the parameter
 * @size: the size of the array
 * @cmp: the pointer that points to a given comparision
 * Return: an integer answer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) == 1)
		{
			return (i);
		}
	}
	return(0);
}
