#include "main.h"
/**
 * reverse_array - a function that reverse the content of an array of integers
 * @a: the array
 * @n: number of element of the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int tmp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}

}
