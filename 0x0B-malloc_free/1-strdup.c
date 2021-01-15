#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_strdup - copies the string value to a new given string value
 * @str: the string to be copied
 * Return: the pointer if the newly copied string
 */
char *_strdup(char *str)
{
	char *arr;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	arr = (char *) malloc(sizeof(char) * (i + 1));
	if (arr == NULL)
	{
		return (0);
	}
	for (j = 0; j < i; j++)
	{
		arr[j] = str[j];
	}
	arr[j + 1] = '\0';
	return (arr);
}
