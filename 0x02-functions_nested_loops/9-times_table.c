#include "main.h"
/**
  *times_table - function prints the 9 times table
  *i will be using for loop and if statment to do this
  *Return: nothing
  */
void times_table(void)
{
	int i, j, mult;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mult = i * j;
			if ((mult / 10) > 0)
				_putchar((mult / 10) + '0');
			_putchar((mult % 10) + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (!((mult / 10) > 0)
						_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
