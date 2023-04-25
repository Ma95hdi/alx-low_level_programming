#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_name - function that prints name
 * @name: name to be printed
 * @f: a function pointer to char
 * Return: name
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
