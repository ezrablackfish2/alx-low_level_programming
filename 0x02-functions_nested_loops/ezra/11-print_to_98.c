#include <stdio.h>
/**
 * print_to_98 - prints integers upto 98
 * @n: the number that starts to count
 * Return: zero
 */
void print_to_98(int n)
{
	int i;

	if (i <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
				if (i == 98)
				{
					break;
				}
			printf(", ");
		}
	}
	else if (i > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if  (i == 98)
			{
				break;
			}
			printf(", ");
		}
	}
}
