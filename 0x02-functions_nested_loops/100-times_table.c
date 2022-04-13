#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table, starting from 0.
 * @n: The integral number to be used.
 *
 * Description: This function prints the times table for any
 * number between 0 and 15.
 * Return: this is a void function no value(s) returned
 */
void print_times_table(int n)
{
	int i, j, tim;

	if (n >= 0 && n < 16)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				tim  = i * j;
				_putchar(',');
				_putchar(' ');
				if (tm < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(tim + '0');
				}
				else if (tim <= 99)
				{
					_putchar(' ');
					_putchar((tim / 10) + '0');
					_putchar((tim % 10) + '0');
				}
				else
				{
					_putchar(((tim / 100) % 10) + '0');
					_putchar(((tim / 10) % 10) + '0');
					_putchar((tim % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
