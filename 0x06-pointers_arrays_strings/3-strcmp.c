#include "main.h"
/**
 * _strcmp - compares two strings and gives and integer value
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, k;

	if (s1[0] == s2[0])
	{
		return (0);
	}
	else if  (s1[0] > s2[0])
	{
		i = 0;
		j = s1[0];
		k = s2[0];
		while (j > k)
		{
			j--;
			i++;
		}
		return (i);
	}
	else if (s2[0] > s1[0])
	{
		i = 0;
		j = s1[0];
		k = s2[0];
		while (k > j)
		{
			k--;
			i++;
		}
		return (-i);
	}
	return (s1[0] - s2[0]);
}
