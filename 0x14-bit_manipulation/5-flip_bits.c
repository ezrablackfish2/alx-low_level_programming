#include "main.h"

/**
 * flip_bits - flip the bits with m times
 * @n: the number to be flipped
 * @m: number of flips
 * Return: the flipped number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int swap;
	int count;

	swap = n ^ m;
	count = 0;

	while (swap)
	{
		count++;
		swap &= (swap - 1);
	}
	return (count);
}
