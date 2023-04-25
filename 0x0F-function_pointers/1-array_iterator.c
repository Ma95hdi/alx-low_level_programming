#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that takes three parameters
 * @array: a pointer to an array of integers
 * @size: the size of the array
 * @action: a function pointer that point to a pointer function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
