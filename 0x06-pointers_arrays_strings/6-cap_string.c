#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @str: pointer tostring
 * Return: pointer to str
 */
char *cap_string(char *str)
{
	int i;

	/*scan through string*/
	i = 0;
	while (str[i] != '\0')
	{/* if next character after i is a char, capitalise it */
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] = str[0] - 32;
		}
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] = (str[i + 1] - 32);
			}
		}
		i++;
	}
	return (str);
}

