#include "main.h"
/** _pow_recursion - gives the power of a number
 * @x: the base number to be powered
 * @y: the power of the number
 * Return: the powered number
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
