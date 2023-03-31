#include "main.h"
/**
 * string_toupper - change all lowercase of a string to uppercase
 * @str: the string
 * Return: str
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		str[i] = str[i];
	}
	return (str);
}
