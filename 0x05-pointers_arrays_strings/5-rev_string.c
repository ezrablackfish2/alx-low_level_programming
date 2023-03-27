#include "main.h"
/**
 * rev_string - reverses a string 
 * @s: the string to be reversed
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, j, k, temp;
	for (i = 0; *s != '\0'; *s++ )
	{
		i++;
	}
	for (j = 0; i > j; i--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}


