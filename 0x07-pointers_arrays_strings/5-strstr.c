#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: string
 * @needle: string
 * Return: biginning of located string or Null
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
			return (haystack);
	}
	return (0);
}
