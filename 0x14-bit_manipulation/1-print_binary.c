#include "main.h"

/**
 * print_binary - changes number to binary
 * @n: the number to be converted
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int tempo;
	int shift = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (tempo = n; (tempo >>= 1) > 0; shift++)
	{
	}

	for (; shift >= 0; shift--)
	{
		if ((n >> shift) & 1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}
