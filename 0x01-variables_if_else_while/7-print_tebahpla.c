#include <stdio.h>
/**
 * main - Entry point
 * descriptin:'print the lowercase alphabet in revers using putchar'
 * Return: always 0
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
