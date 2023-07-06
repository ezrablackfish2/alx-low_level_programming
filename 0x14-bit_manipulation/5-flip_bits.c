#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @num: first number
 * @mun: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int num, unsigned long int mun)
{
	int p, c = 0;
	unsigned long int cur;
	unsigned long int exc = num ^ mun;

	for (p = 63; p >= 0; p--)
	{
		cur = exc >> p;
		if (cur & 1)
			c++;
	}

	return (c);
}
