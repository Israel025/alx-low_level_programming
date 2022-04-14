#include "main.h"

/**
 * print_square - prints a square in the terminal.
 * @size: The size of the square.
 *
 * Description: does as explained above ending
 * with a new line.
 * Return: void,  no return value.
 */
void print_square(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
