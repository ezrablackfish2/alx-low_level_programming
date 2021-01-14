#include <stdio.h>
#include<stdlib.h>
/**
 * *create_array - creates array but dynamically with given size
 * @size: the size of array required
 * @c: the character that is assigned to each array values
 * Return: the pointer of array created
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = (char *) malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	arr[i] = '\0';
	return (arr);
}
