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

	for (h = 48; h < 58; h++)
	{
		for (k = 48; k < 58; k++)
		{
			for (i = 48; i < 58; i++)
			{
				for(j = 48; j < 58; j++)
				{
					int x = (h * 10) + k;
					int y = (i * 10) + j;
					if (x < y)
					{
						putchar(h);
						putchar(k);
						putchar(' ');
						putchar(i);
						putchar(j);
						if ((h == 57) && (k == 56) && (i == 57) && (j == 57))
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
	}
	putchar('\n');
	return (0);
}
