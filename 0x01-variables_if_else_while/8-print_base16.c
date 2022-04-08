#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *program prints all numbers of base 16
 *starting from 0 - f
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
	}
	for (j = 0; j < 6; j++)
	{
		putchar(97 + j);
	}
	putchar('\n');
	return (0);
}
