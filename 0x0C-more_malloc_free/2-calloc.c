#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @arr: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *arr, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		arr[i] = b;
	}
	return (arr);
}
/**
 * *_calloc - using malloc allocate memory
 * @nmemb: the array
 * @size : the size of the type of variable
 * Return: pointer to nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb == 0 || size == 0)
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
