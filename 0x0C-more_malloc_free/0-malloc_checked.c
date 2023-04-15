#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * *malloc_checked - a function that allocates memory
  * @b: int
  *Return: a pointer to the array initialized or null
  */
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == NULL)
		exit(98);

	return (m);
}
