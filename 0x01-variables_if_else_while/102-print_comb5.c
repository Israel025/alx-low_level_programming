#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *program prints all possible combinations of two two-digits
 *without repeating identical digits
 *numbers, using putchar function
 * Return: Always 0 (Success)
*/
int main(void)
{
	int h, k, i, j;
	for (h = 0; h < 10; h++)
	{
		for (k = 0; k < 9; k++)
		{
			for (i = 0; i < 10; i++)
			{
				for (j = 0; j < 10; j++)
				{
					putchar(48 + h);
					putchar(48 + k);
					putchar(' ');
					putchar(48 + i);
					putchar(48 + j);
					if ((h == 9) && (k == 8) && (i == 9) && (j == 9))
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
		}
	}
	putchar('\n');
	return (0);
}
