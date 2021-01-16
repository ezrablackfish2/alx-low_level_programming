#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - concatenates two strings
 * s1: the first string to be keeped
 * s2: the second string to be concatenated
 * n: the length of string concatenated
 * Return: the string address
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *arr;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (n < j)
	{
		j = n;
	}
	arr = malloc(sizeof(char) * (i + j + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < (i + j); k++)
	{
		if (k < i)
		{
			arr[k] = s1[k];
		}
		else
		{
			arr[k] = s2[k - i];
		}
	}
	arr[k] = '\0';
	return (arr);
}
