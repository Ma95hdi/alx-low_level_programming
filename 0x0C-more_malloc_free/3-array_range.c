#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *array_range - creates an array of integers
  *@min: starting int
  *@max: max int
  *Return: array of integers
  */
int *array_range(int min, int max)
{
	int len, i;
	int *ptr;

	if (min > max)
		return (0);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (0);
	for (i = 0; i < len; i++)
		ptr[i] = min++;
	return (ptr);
}
