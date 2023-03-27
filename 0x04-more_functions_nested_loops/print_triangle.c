#include "main.h"
/**
 * print_triangle - prints a triangular section to the side of the left
 * @size: the size of the triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	int i, j;
	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		j = 0;
		while (j < size -i)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
	}
}
