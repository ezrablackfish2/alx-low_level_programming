#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @num: pointer to the number to change
 * @ind: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *num, unsigned int ind)
{
	if (ind > 63)
		return (-1);

	*num = (~(1UL << ind) & *num);
	return (1);
}
