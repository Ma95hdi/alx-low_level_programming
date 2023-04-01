#include "main.h"
/**
 * string_toupper - change all lowercase of a string to uppercase
 * @str: pointer tostring
 * Return: pointer to uppercase string
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
