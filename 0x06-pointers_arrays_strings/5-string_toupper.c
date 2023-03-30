#include "main.h"
/**
 * string_toupper - converts the string to upper
 * @str: character to be converted
 * Return: character
 */
char *string_toupper(char *str)
{
	char i[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char j[] = "abcdefghijklmnopqrstuvwxyz";
	int k = 0;
	int l;

	while (str[k] != '\0')
	{
		for (l = 0; l < 26; l++)
		{
			if (str[k] == j[l])
			{
				str[k] = i[l];
			}
		}
		k++;
	}
	return (str);
}
