#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return: zero (0)
 */
void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		char j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		i++;
		_putchar('\n');
	}
}
