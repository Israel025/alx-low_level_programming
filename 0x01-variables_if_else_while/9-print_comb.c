#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *program prints all possible combinations of single digits
 *numbers, using putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s;

	for (s = 0; s < 10; s++)
	{
		putchar(48 + s);

		if (s != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
