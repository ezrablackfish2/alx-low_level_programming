#include "main.h"
/**
 * times_table - prints 9 times table
 * Return: nothing
 */
void times_table(void)
{
	int i = 0;
	int k = 0;
	int m;

	while (i <= 9)
	{
		int j = 0;

		while (j <= 9)
		{
			m = i * j;
			_putchar('0' + m);
			_putchar(',');
			_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
