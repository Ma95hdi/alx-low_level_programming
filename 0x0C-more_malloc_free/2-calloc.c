#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *_calloc - allocates memory for an array, initialized to zero
  * @nmemb: number of elements
  * @size: byte size of each element
  *Return: void pointer to array space
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (!nmemb || !size)
		return (0);
	p = malloc(nmemb * size);
	if (!p)
		return (0);
	nmemb *= size;
	while (nmemb--)
		p[nmemb] = 0;
	return (p);
}
