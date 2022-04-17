#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the highest prime factor
 * of the number 612852475143.
 *
 * Description: does as explained above ending
 * with a new line.
 * Return: void,  no return value.
 */
int main(void)
{
	int i = 2;
	long num = 612852475143;

	while (num > 1)
	{
		if (num % i == 0)
		{
			num /= i;
		}
		else
		{
			i++;
		}
	}
	printf("%lu\n", i);
	return (0);
}
