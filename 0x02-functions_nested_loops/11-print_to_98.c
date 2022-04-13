#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: The integral number to be used as starting point. 
 *
 * Description: This function printts all natural numbers from any
 * number to 98 (either backwards or forward).
 * Return: this is a void function no value(s) returned
 */
void print_to_98(int n)
{
int ct;

if (n > 98)
{
	for (ct = n; ct >= 98; ct--)
	{
		if (ct == 98)
		{
			printf("%d", ct);
		}
		else
		{
			printf("%d, ", ct);
		}
	}
	putchar('\n');
}
else if (n < 98)
{
	for (ct = n; ct <= 98; ct++)
	{
		if (ct == 98)
		{
			printf("%d", ct);
		}
		else
		{
			printf("%d, ", ct);
		}
	}
	putchar('\n');
}
else if (n == 98)
{
	printf("%d\n", n);
}
}
