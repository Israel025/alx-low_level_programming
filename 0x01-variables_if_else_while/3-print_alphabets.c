#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *program prints alphabets a to z in small caps
 *using putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s, b;

	for (s='a'; s<='z'; s++)
	{
		putchar(s);
	}
	for (b='A'; b<='Z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
