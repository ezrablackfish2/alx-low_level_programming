#include "main.h"
/**
 * is_prime_number - checks whether a number is prime
 * @n: the number to be checked
 * @i: iterator
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
/**
 * prime - really checks whether a number is prime or not
 * @n: the number again so that it is prime or not
 * @i: iterator
 * Return: 1 if prime 0 if composite
 */

int prime(int n, int i)
{
	if (n == i)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (prime(n, i + 1));
}
