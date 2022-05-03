#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - adds positive numbers and print the result.
 * @argc: The size of the argument vector array (argv).
 * @argv: The argument vector array.
 *
 * Description: This program does as specified above
 * and followed by a new line
 * Return: 0 if no number is passed and
 * return 1 if a non-digit symbol is detected.
 */
int main(int argc, char *argv[])
{
	int i, j, add;
	char *buff;

	add = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			buff = argv[i];
			j = 0;

			while (buff[j] != '\0')
			{
				if (isdigit(buff[j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	return (0);
}
