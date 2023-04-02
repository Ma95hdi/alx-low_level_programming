#include "main.h"
/**
 *leet - a function that encodes a string into 1337
 *@str: the string
 *Return: str
 */
char *leet(char *str)
{
	int i;
	int j;
	char c;

	for (i = 0, j = 0; str[i] != '\0'; i++, j++)
	{
		c = str[i];
		if (c == 'a' || c == 'A')
		{
			str[j] = '4';
		} else if (c == 'e' || c == 'E')
		{
			str[j] = '3';
		} else if (c == 'o' || c == 'O')
		{
			str[j] = '0';
		} else if (c == 't' || c == 'T')
		{
			str[j] = '7';
		} else if (c == 'l' || c == 'L')
		{
			str[j] = '1';
		} else
		{
			str[j] = c;
		}
	}
	str[j] = '\0';
	return (str);
}
