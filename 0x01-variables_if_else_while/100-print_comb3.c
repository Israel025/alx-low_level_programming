#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *program prints all possible combinations of two digits
 *without repeating identical digits
 *numbers, using putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = (i + 1); j < 10; j++)
		{
			putchar(48 + i);
			putchar(48 + j);

			if ((i == 8) && (j == 9))
			{
				continue;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
