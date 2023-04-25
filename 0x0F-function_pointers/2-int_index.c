#include "function_pointers.h"
#include <stdio.h>

/**
  * int_index - a function takes three parameters
  * @array: a pointer to an array of integers
  * @size: The number of elements in the array
  * @cmp: A function pointer that points to a function
  * Return: index or -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
