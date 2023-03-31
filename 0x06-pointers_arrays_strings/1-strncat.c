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
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	dest[i] != '\0';
	return (dest);
}
