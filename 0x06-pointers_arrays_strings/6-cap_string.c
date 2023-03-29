#include "main.h"
/**
 * cap_string - capitalizes the first letter of a word
 * @s - string to be first letter of a word to be capitalized
 * Return: a charater pointer
 */
char *cap_string(char *s)
{
	int i, j;

	i = 1;
	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '?' || s[i] == '.' || s[i] == ',' || s[i] == ';' || s[i] == '!' || s[i] == '\n' || s[i] == '\t')
		{
			j = i + 1;
			if (s[j] > 'a' && s[j] < 'z')
			{
				s[j] -= 32;
			}
		}
		i++;
	}
	return (s);
}

