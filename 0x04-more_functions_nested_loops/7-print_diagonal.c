#include "main.h"

/**
 * print_diagonal - prints a diagonal line in the terminal.
 * @n:the amount of line that will be printed.
 *
 * Description: does as explained above ending
 * with a new line.
 * Return: void,  no return value.
 */
void print_diagonal(int n)
{
	int i, k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(92);
			_putchar('\n');
			if (i >= 1)
			{
				for (k = 0; k < i; k++)
				{
					_putchar(' ');
				}
			}
		}
	}
}
