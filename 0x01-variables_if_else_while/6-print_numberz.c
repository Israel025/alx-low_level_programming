#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *program prints all single digit numbers of base 10
 *starting from 0 - 9
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
	}
	putchar('\n');
	return (0);
}