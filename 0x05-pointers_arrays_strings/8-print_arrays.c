#include "main.h"
#include <stdio.h>
/**
 * print_array - prints the elements of an array
 * @a: the array itslef
 * @n: the number of elements
 * Return: nothing
 */
void print_array(int *a, int n)
{
	for (n; n >= 0; n--)
	{
		if (n == 0)
		{
			printf("%d", a[n]);
		}
		else
		{
			printf("%d, ", a[n]);
		}
	}
}
