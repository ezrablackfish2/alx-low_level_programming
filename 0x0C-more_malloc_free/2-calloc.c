#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_calloc - using malloc allocate memory
 * @nmemb: the array
 * @size : the size of the type of variable
 * Return: pointer to nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * nmemb);
	if (arr == NULL)
	{
		return (NULL);
	}
	_memset(arr, 0, nmemb * size);
	return (arr);
}
