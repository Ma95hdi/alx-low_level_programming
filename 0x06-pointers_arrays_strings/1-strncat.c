#include "main.h"
/**
  * _strncat - concatenates two strings
  * @dest: input value
  * @src: output value
  * @n: num of byte
  * Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] != '\0';
	return (dest);
}
