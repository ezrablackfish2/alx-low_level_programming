#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *string_noncat - concatenates two strings
 * s1: the first string to be keeped
 * s2: the second string to be concatenated
 * n: the length of string concatenated
 * Return: the string address
 */
char *string_noncate(char *s1, char *s2, unsigned int n)
{
	int i, j, k;
	char *arr;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	arr = malloc(sizeof(char) * (i + n));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		arr[j] = s1[j];
	}
	for (k = 0; k < n; k++)
	{
		j++;
		arr[j] = s1[k];
	}
	arr[j++] = '\0';
	return (arr);
}
