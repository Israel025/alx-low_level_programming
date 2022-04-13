#include <stdio.h>

/**
 * main - prints the sum of all even-value fibonacci terms
 * between 1 and 4000000.
 *
 * Description: This program prints as explained above
 * and followed by a new line
 * Return: void
 */
int main(void)
{
long int accum, seed1, seed2, fbn;
seed1 = 1;
seed2 = 2;
fbn = 0;
accum = 0;

while (fbn <= 4000000)
{
	fbn = seed1 + seed2;
	seed1 = seed2;
	seed2 = fbn;
	if((seed1 % 2) == 0)
	{
		accum += seed1;
	}
}
printf("%ld\n", accum);

return (0);
}
