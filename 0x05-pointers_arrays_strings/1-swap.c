#include "main.h"

/**
 * swap_int - a function that swaps the value of two int
 *@a: first int
 *@b: second int
 */
void swap_int(int *a, int *b)
{
	int *a;
	int *b;

	a = 98;
	b = 42;

	_putchar("a = %, b = %d\n", a, b);
	swap_int(&a, &b);
	_putchar("a = %d, b = %d\n", a, b);
}
