#include "main.h"

/**
 * print_triangle - prints a triangle in the terminal.
 * @size: The size of the triangle.
 *
 * Description: does as explained above ending
 * with a new line.
 * Return: void, no return value.
 */
void print_triangle(int size)
{
	int i, j, k;
	int sp = 0;
	int ash = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size == 1)
	{
		_putchar(35);
	}
	else
	{
		sp = size - 1;
		ash = size - sp;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < sp; j++)
				_putchar(32);
			for (k = 0; k < ash; k++)
				_putchar(35);
			sp--;
			ash++;
			_putchar('\n');
		}
	}
}
