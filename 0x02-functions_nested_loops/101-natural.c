#include <stdio.h>

/**
 * main - prints the total sum of all the multiples
 * of 3 or 5 below 1024.
 *
 * Description: This program prints as explained above
 * followed by a new line
 * Return: void
 */
int main(void)
{
int i;
int accum = 0;

for (i = 0; i < 1024; i++)
{
	if ((i % 3) == 0 || (i % 5) == 0)
	{
		accum += i;
	}
}
printf("%d\n", accum);

return (0);
}
