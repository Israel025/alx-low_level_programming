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
	int s;

	for (s = 'a'; s <= 'z'; s++)
	{
		if (s == 'e' || s == 'q')
		{
			continue;
		}
		putchar(s);
	}
	putchar('\n');
	return (0);
}
