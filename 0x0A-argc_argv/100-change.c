#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: The size of the argument vector array (argv).
 * @argv: The argument vector array.
 *
 * Description: This program does as specified above
 * and followed by a new line
 * Return: 0 if negative number is passed, return 1 if argc != 1.
 */
int main(int argc, char *argv[])
{
	int cents, counter;

	counter = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		if (cents <= 0)
		{
			printf("0\n");
			return (0);
		}
		else
		{
			while (cents > 0)
			{
				if (cents >= 25)
					cents -= 25;
				else if (cents >= 10)
					cents -= 10;
				else if (cents >= 5)
					cents -= 5;
				else if (cents >= 2)
					cents -= 2;
				else if (cents >= 1)
					cents -= 1;
				counter += 1;
			}
			printf("%d\n", counter);
			return (0);
		}
	}
}
