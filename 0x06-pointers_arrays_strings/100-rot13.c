#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str:the string
 * Return: str
 */
char *rot13(char *str)
{
	int i;
	int j;
	char c;

	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];

		if (c >= 'a' && c <= 'z')
		{
			for (j = 0; j < 13; j++)
			{
				if (c == 'z')
				{
					c = 'a';
				} else
				{
					c++;
				}
			}
			str[i] = c;
		} else if (c >= 'A' && c <= 'Z')
		{
			for (j = 0; j < 13; j++)
			{
				if (c == 'Z')
				{
					c = 'A';
				} else
				{
					c++;
				}
			}
			str[i] = c;
		}
	}
	return (str);
}
