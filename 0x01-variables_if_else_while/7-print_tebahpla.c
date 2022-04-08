#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *program prints lower case alphabets in reverse
 *using putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s;

	for (s = 'z'; s >= 'a'; s--)
	{
		putchar(s);
	}
	putchar('\n');
	return (0);
}
