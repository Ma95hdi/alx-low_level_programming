#include "main.h"
/**
  *is_prime_number - return 1 if the integer is a prime number
  *@n: integer
  *Return: 1 if the input is a prime number else 0
  */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
