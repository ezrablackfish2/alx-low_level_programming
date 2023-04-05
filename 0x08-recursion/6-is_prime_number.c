#include "main.h"
/**
 * is_prime_number - checks whether a number is prime
 * @n: the number to be checked
 * Return: the value 1 or 0
 */
int prime(int n, int i);

int is_prime_number(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	if (n < 0)
	{
		return (0);
	}
	return (prime(n, 2));
}

int prime(int n, int i)
{
	if (n == i)
	{
		return(1);
	}
	if (n % i == 0)
	{
		return(0);
	}
	return (prime(n, i+1));
}
