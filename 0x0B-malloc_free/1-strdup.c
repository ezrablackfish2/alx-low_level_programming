#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - copies the string value to a new given string value
 * @str: the string to be copied
 * Return: the pointer if the newly copied string
 */
char *_strdup(char *str)
{
	char *arr;
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	arr = (char *) malloc(sizeof(char) * i);
		if (arr == NULL)
		{
			return (0);
		}
	for (j = 0; j < i; j++)
	{
		arr[j] = str[j];
	}
	arr[j] = '\0';
	return (arr);
}
