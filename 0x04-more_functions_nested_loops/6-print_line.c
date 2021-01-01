#include "main.h"
/**
 * print_line - prints a line for a given number we give it
 * @n: number given so that is should be the number of line
 * Return: nothing/
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
