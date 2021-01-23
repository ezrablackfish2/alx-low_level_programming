#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * op_add - returns the sum of a adn b
 * op_sub - returns the difference of a and b
 * op_mul - return the product of a and b
 * op_div - returns the division of a by b
 * op_mod - returns the remainder of a by b
 * @a: the first number given
 * @b: the second number given
 * Return: the final opeartion
 */
int op_add(int a, int b)
{
	return (a + b);
}
int op_sub(int a, int b)
{
	return (a - b);
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b)
{
	return (a / b);
}
int op_mod(int a, int b)
{
	return (a % b);
}
