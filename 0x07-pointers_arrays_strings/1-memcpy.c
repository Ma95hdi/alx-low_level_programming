#include "main.h"
/**
  * _memcpy - a function that copies memory area
  * @src: output value
  * @dest: input value
  *@n: number of bytes
  *Return: dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;
	int r = 0;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

