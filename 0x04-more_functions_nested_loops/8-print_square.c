#include "main.h"
/**
 * print_square - to print squares in a loop
 * @size: is integer that is the size of the integer to be printed
 * Return: nothing
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
	}
}
