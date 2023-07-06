#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @num: number to search
 * @ind: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int num, unsigned int ind)
{
	int bit;

	if (ind > 63)
		return (-1);

	bit = (num >> ind) & 1;

	return (bit);
}
