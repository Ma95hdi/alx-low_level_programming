#include "main.h"
#include <string.h>

/**
 *print_rev - print in reverse
 *@s: string
 *Return: 0
 */
void print_rev(char *s)
{
	int len = strlen(s);

	for (int i = len - 1; i >= 0; i--) 
	{
		putchar(s[i]);
	}
	putchar('\n');
}
