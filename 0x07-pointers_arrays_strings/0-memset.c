#include "main.h"
/**
  * _memset - a function that fills memory with constant byte
  * @s: the pointer
  * @n: the number of byte to be written
  * @b: the constant byte to be written to the memory area
  * Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
