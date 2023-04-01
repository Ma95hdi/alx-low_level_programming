#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @str: the string
 * Return: str
 */
char *cap_string(char *str)
{
	int i;

	str[0] = toupper(str[0]);

	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			i++;
			if (str[i] != '\0')
			{
				str[i] = toupper(str[i]);
			}
		else
		{
			str[i] = tolower(str[i]);
		}
	}

	return (str);
}

