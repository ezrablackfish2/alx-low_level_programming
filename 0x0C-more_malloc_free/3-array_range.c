#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *array_range - creates an array of integers by range from nim to max
 * min: the minimum range for array start
 * max: the maximum range for array end
 * Return: address for the array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc((max - min + 1)* sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
