#include "main.h"
/**
  *_sqrt_recursion - return the natural square root of a number
  *@n: number to calculate the square root of number
  *
  *Return: the resulting square root
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (n * (n - 1));
}
