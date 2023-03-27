#include "main.h"
/**
 * print_diagonal - to print a diagonal line on a terminal
 * @n: tries the diagonal number
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		j = i;
		while (j > 0)
		{
			_putchar(' ');
			j--;
		}
		_putchar('\\');
		_putchar('\n');
	}
}
