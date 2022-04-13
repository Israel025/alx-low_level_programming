#include <stdio.h>

/**
 * main - first 50 Fibonacci numbers, starting with 1 and 2
 * of 3 or 5 below 1024.
 *
 * Description: This program prints as explained above
 * separated by comma and followed by a new line
 * Return: void
 */
int main(void)
{
int i;
long int seed1, seed2, fbn;
seed1 = 1;
seed2 = 2;

printf("%ld, %ld", seed1, seed2);
for (i = 0; i < 48; i++)
{
	fbn = seed1 + seed2;
	printf(", %ld", fbn);
	seed1 = seed2;
	seed2 = fbn;
}
printf("\n");

return (0);
}
