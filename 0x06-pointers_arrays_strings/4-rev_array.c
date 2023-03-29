#include "main.h"
/**
 * reverse_array - reverses the values of an array
 * @a: the array value to be reversed
 * @n: the length of the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
