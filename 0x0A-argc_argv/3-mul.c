#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers and print the result.
 * @argc: The size of the argument vector array (argv).
 * @argv: The argument vector array.
 *
 * Description: This program does as specified above
 * and followed by a new line
 * Return: void
 */
int main(int argc, char *argv[])
{
	int i, mul;

	mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error");
		return (1);
	}

	return (0);
}
