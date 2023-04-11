#include <stdio.h>
#include <stdlib.h>

/**
  *main - print a program that multiplies two numbers, followed by new line
  *@argc: number of command line arguments
  *@argv: pointer to an array of command line arguments
  *Return: 0-success, non-zero-fail
  */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

		printf("%d\n", result);

		return (0);
}
