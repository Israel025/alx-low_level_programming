#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * @argc: The size of the argument vector array (argv).
 * @argv: The argument vector array.
 *
 * Description: This program does as specified above
 * and followed by a new line
 * Return: void
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
