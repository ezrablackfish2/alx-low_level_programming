#include "main.h"
/**
 * more_numbers - prints 10 times from 0 - 14
 * Return: nothing
 */
void more_numbers(void)
{
	int i;
	int j = 0;

	while (j <= 10)
	{
		i = 0;

		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar('0' + i / 10);
			}
			_putchar('0' + i % 10);
		}
		j++;
		_putchar('\n');
	}
}
