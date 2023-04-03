#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: string
 * @c: thr character
 * Return: a pointer to the first occurence of c or null if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0';i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
