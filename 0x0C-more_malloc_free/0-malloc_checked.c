#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - allocates memory to a given function
 * @b: the integer we need to allocate memory for
 * Return: NUll address
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *num;

	if (b == 0)
	{
		return (NULL);
	}
	num = malloc(b);
	if (num == NULL)
	{
		exit(98);
	}
	return (num);
}
